//
// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************
//
//
// 20100428  M. Kelsey -- Use G4InuclParticleNames enums instead of numbers,
//		add Omega and antinucleons.
// 20100429  M. Kelsey -- Change "case gamma:" to "case photon:"
// 20100923  M. Kelsey -- Drop "uups" message when converting G4PartDef to code
// 20101029  M. Kelsey -- Add instantiation of new particles, antiparticles
// 20110214  M. Kelsey -- Drop unused "generation"
// 20110307  M. Kelsey -- Add random K0 mixing if K0S/K0L passed to type()
// 20110321  M. Kelsey -- Fix getStrangeness to return int
// 20110801  M. Kelsey -- Add fill() functions to replicate ctors, allowing
//		reuse of objects as buffers; c.f. G4InuclNuclei.
// 20110922  M. Kelsey -- Add stream argument to printParticle() => print()
// 20120608  M. Kelsey -- Fix variable-name "shadowing" compiler warnings.
// 20130508  D. Wright -- Add lepton construction, use wrapper header
// 20140310  M. Kelsey -- Fix constness in G4PD* passing

#include "G4InuclElementaryParticle.hh"

#include "G4Dineutron.hh"
#include "G4Diproton.hh"
#include "G4InuclParticleNames.hh"
#include "G4ParticleDefinition.hh"
#include "G4ParticleTypes.hh"
#include "G4SystemOfUnits.hh"
#include "G4UnboundPN.hh"
#include "Randomize.hh"
using namespace G4InuclParticleNames;

const G4ParticleDefinition* G4InuclElementaryParticle::makeDefinition(G4int ityp)
{
  switch (ityp)
  {
    case proton:
      return G4Proton::Definition();
      break;
    case neutron:
      return G4Neutron::Definition();
      break;
    case pionPlus:
      return G4PionPlus::Definition();
      break;
    case pionMinus:
      return G4PionMinus::Definition();
      break;
    case pionZero:
      return G4PionZero::Definition();
      break;
    case photon:
      return G4Gamma::Definition();
      break;
    case kaonPlus:
      return G4KaonPlus::Definition();
      break;
    case kaonMinus:
      return G4KaonMinus::Definition();
      break;
    case kaonZero:
      return G4KaonZero::Definition();
      break;
    case kaonZeroBar:
      return G4AntiKaonZero::Definition();
      break;
    case lambda:
      return G4Lambda::Definition();
      break;
    case sigmaPlus:
      return G4SigmaPlus::Definition();
      break;
    case sigmaZero:
      return G4SigmaZero::Definition();
      break;
    case sigmaMinus:
      return G4SigmaMinus::Definition();
      break;
    case xiZero:
      return G4XiZero::Definition();
      break;
    case xiMinus:
      return G4XiMinus::Definition();
      break;
    case omegaMinus:
      return G4OmegaMinus::Definition();
      break;
      // NOTE:  The four light nuclei "particles" are actually G4Ions
    case deuteron:
      return G4Deuteron::Definition();
      break;
    case triton:
      return G4Triton::Definition();
      break;
    case He3:
      return G4He3::Definition();
      break;
    case alpha:
      return G4Alpha::Definition();
      break;
    case antiProton:
      return G4AntiProton::Definition();
      break;
    case antiNeutron:
      return G4AntiNeutron::Definition();
      break;
      // NOTE:  The the four light antinuclei "particles" are actually G4Ions
    case antiDeuteron:
      return G4AntiDeuteron::Definition();
      break;
    case antiTriton:
      return G4AntiTriton::Definition();
      break;
    case antiHe3:
      return G4AntiHe3::Definition();
      break;
    case antiAlpha:
      return G4AntiAlpha::Definition();
      break;
      // NOTE:  The three unbound dibaryons are local Bertini classes
    case diproton:
      return G4Diproton::Definition();
      break;
    case unboundPN:
      return G4UnboundPN::Definition();
      break;
    case dineutron:
      return G4Dineutron::Definition();
      break;
      // Leptons are included for muon capture and future tau/neutrino physics
    case electron:
      return G4Electron::Definition();
      break;
    case positron:
      return G4Positron::Definition();
      break;
    case electronNu:
      return G4NeutrinoE::Definition();
      break;
    case antiElectronNu:
      return G4AntiNeutrinoE::Definition();
      break;
    case muonMinus:
      return G4MuonMinus::Definition();
      break;
    case muonPlus:
      return G4MuonPlus::Definition();
      break;
    case muonNu:
      return G4NeutrinoMu::Definition();
      break;
    case antiMuonNu:
      return G4AntiNeutrinoMu::Definition();
      break;
    case tauMinus:
      return G4TauMinus::Definition();
      break;
    case tauPlus:
      return G4TauPlus::Definition();
      break;
    case tauNu:
      return G4NeutrinoTau::Definition();
      break;
    case antiTauNu:
      return G4AntiNeutrinoTau::Definition();
      break;
    default:
      G4cerr << "G4InuclElementaryParticle::makeDefinition: unknown particle type " << ityp
             << G4endl;
  }

  return 0;
}

namespace
{
// Definition of the particle class T, retrieved only on first use: the
// definitions are singletons, and calling the out-of-line Definition()
// functions in every call of type() below is a hot spot of the cascade
template<class T>
inline const G4ParticleDefinition* Def()
{
  static const G4ParticleDefinition* const def = T::Definition();
  return def;
}
}  // namespace

// This is the inverse mapping to makeDefinition above

G4int G4InuclElementaryParticle::type(const G4ParticleDefinition* pd)
{
  if (pd == 0) return 0;
  if (pd == Def<G4Proton>()) return proton;
  if (pd == Def<G4Neutron>()) return neutron;
  if (pd == Def<G4PionPlus>()) return pionPlus;
  if (pd == Def<G4PionMinus>()) return pionMinus;
  if (pd == Def<G4PionZero>()) return pionZero;
  if (pd == Def<G4Gamma>()) return photon;
  if (pd == Def<G4KaonPlus>()) return kaonPlus;
  if (pd == Def<G4KaonMinus>()) return kaonMinus;
  if (pd == Def<G4KaonZero>()) return kaonZero;
  if (pd == Def<G4AntiKaonZero>()) return kaonZeroBar;
  if (pd == Def<G4Lambda>()) return lambda;
  if (pd == Def<G4SigmaPlus>()) return sigmaPlus;
  if (pd == Def<G4SigmaZero>()) return sigmaZero;
  if (pd == Def<G4SigmaMinus>()) return sigmaMinus;
  if (pd == Def<G4XiZero>()) return xiZero;
  if (pd == Def<G4XiMinus>()) return xiMinus;
  if (pd == Def<G4OmegaMinus>()) return omegaMinus;
  // NOTE:  The four light nuclei "particles" are actually G4Ions
  if (pd == Def<G4Deuteron>()) return deuteron;
  if (pd == Def<G4Triton>()) return triton;
  if (pd == Def<G4He3>()) return He3;
  if (pd == Def<G4Alpha>()) return alpha;
  if (pd == Def<G4AntiProton>()) return antiProton;
  if (pd == Def<G4AntiNeutron>()) return antiNeutron;
  // NOTE:  The the four light antinuclei "particles" are actually G4Ions
  if (pd == Def<G4AntiDeuteron>()) return antiDeuteron;
  if (pd == Def<G4AntiTriton>()) return antiTriton;
  if (pd == Def<G4AntiHe3>()) return antiHe3;
  if (pd == Def<G4AntiAlpha>()) return antiAlpha;
  // NOTE:  The three unbound dibaryons are local Bertini classes
  if (pd == Def<G4Diproton>()) return diproton;
  if (pd == Def<G4UnboundPN>()) return unboundPN;
  if (pd == Def<G4Dineutron>()) return dineutron;

  if (pd == Def<G4Electron>()) return electron;
  if (pd == Def<G4Positron>()) return positron;
  if (pd == Def<G4NeutrinoE>()) return electronNu;
  if (pd == Def<G4AntiNeutrinoE>()) return antiElectronNu;
  if (pd == Def<G4MuonMinus>()) return muonMinus;
  if (pd == Def<G4MuonPlus>()) return muonPlus;
  if (pd == Def<G4NeutrinoMu>()) return muonNu;
  if (pd == Def<G4AntiNeutrinoMu>()) return antiMuonNu;
  if (pd == Def<G4TauMinus>()) return tauMinus;
  if (pd == Def<G4TauPlus>()) return tauPlus;
  if (pd == Def<G4NeutrinoTau>()) return tauNu;
  if (pd == Def<G4AntiNeutrinoTau>()) return antiTauNu;

  // Weak neutral kaons must be mixed back to strong (strangeness states)
  if (pd == Def<G4KaonZeroShort>() || pd == Def<G4KaonZeroLong>())
  {
    return ((G4UniformRand() > 0.5) ? kaonZero : kaonZeroBar);
  }

  return 0;  // Unknown objects return zero (e.g., nuclei)
}

void G4InuclElementaryParticle::setType(G4int ityp)
{
  setDefinition(makeDefinition(ityp));
}

// Overwrite data structure (avoids creating/copying temporaries)

void G4InuclElementaryParticle::fill(const G4LorentzVector& mom, G4int ityp,
                                     G4InuclParticle::Model model)
{
  setType(ityp);
  setMomentum(mom);
  setModel(model);
}

void G4InuclElementaryParticle::fill(G4double ekin, G4int ityp, G4InuclParticle::Model model)
{
  setType(ityp);
  setKineticEnergy(ekin);
  setModel(model);
}

void G4InuclElementaryParticle::fill(const G4LorentzVector& mom, const G4ParticleDefinition* pd,
                                     G4InuclParticle::Model model)
{
  setDefinition(pd);
  setMomentum(mom);
  setModel(model);
}

// Assignment operator for use with std::sort()
G4InuclElementaryParticle&
G4InuclElementaryParticle::operator=(const G4InuclElementaryParticle& right)
{
  G4InuclParticle::operator=(right);
  return *this;
}

G4int G4InuclElementaryParticle::getStrangeness(G4int ityp)
{
  const G4ParticleDefinition* pd = makeDefinition(ityp);
  return pd ? (pd->GetQuarkContent(3) - pd->GetAntiQuarkContent(3)) : 0;
}

G4double G4InuclElementaryParticle::getParticleMass(G4int ityp)
{
  const G4ParticleDefinition* pd = makeDefinition(ityp);
  return pd ? pd->GetPDGMass() * MeV / GeV : 0.0;  // From G4 to Bertini units
}

// Print particle parameters

void G4InuclElementaryParticle::print(std::ostream& os) const
{
  G4InuclParticle::print(os);
  os << G4endl << " Particle: " << getDefinition()->GetParticleName() << " type " << type()
     << " mass " << getMass() << " ekin " << getKineticEnergy();
}
