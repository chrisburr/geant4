//
// ********************************************************************
// * DISCLAIMER                                                       *
// *                                                                  *
// * The following disclaimer summarizes all the specific disclaimers *
// * of contributors to this software. The specific disclaimers,which *
// * govern, are listed with their locations in:                      *
// *   http://cern.ch/geant4/license                                  *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.                                                             *
// *                                                                  *
// * This  code  implementation is the  intellectual property  of the *
// * GEANT4 collaboration.                                            *
// * By copying,  distributing  or modifying the Program (or any work *
// * based  on  the Program)  you indicate  your  acceptance of  this *
// * statement, and all its terms.                                    *
// ********************************************************************
//
//
// $Id: G4Mg24GEMProbability.cc,v 1.1 2002/06/06 18:02:11 larazb Exp $
// GEANT4 tag $Name: geant4-05-00 $
//
// Hadronic Process: Nuclear De-excitations
// by V. Lara (Nov 1999)
//


#include "G4Mg24GEMProbability.hh"

G4Mg24GEMProbability::G4Mg24GEMProbability() :
  G4GEMProbability(24,12,0.0) // A,Z,Spin
{

    ExcitEnergies.push_back(1368.59*keV);
    ExcitSpins.push_back(2.0);
    ExcitLifetimes.push_back(1.37*picosecond);

    ExcitEnergies.push_back(4122.82*keV);
    ExcitSpins.push_back(4.0);
    ExcitLifetimes.push_back(38.0e-3*picosecond);

    ExcitEnergies.push_back(4238.4*keV);
    ExcitSpins.push_back(2.0);
    ExcitLifetimes.push_back(73.0e-3*picosecond);

    ExcitEnergies.push_back(5236.1*keV);
    ExcitSpins.push_back(3.0);
    ExcitLifetimes.push_back(76.0e-3*picosecond);

    ExcitEnergies.push_back(6010.3*keV);
    ExcitSpins.push_back(4.0);
    ExcitLifetimes.push_back(55.0e-3*picosecond);

    ExcitEnergies.push_back(6432.2*keV);
    ExcitSpins.push_back(0.0);
    ExcitLifetimes.push_back(55.0e-3*picosecond);

    ExcitEnergies.push_back(7347.9*keV);
    ExcitSpins.push_back(2.0);
    ExcitLifetimes.push_back(14.0e-3*picosecond);

    ExcitEnergies.push_back(7553.0*keV);
    ExcitSpins.push_back(1.0);
    ExcitLifetimes.push_back(270.0e-3*picosecond);

    ExcitEnergies.push_back(7616.2*keV);
    ExcitSpins.push_back(3.0);
    ExcitLifetimes.push_back(1.2*picosecond);

    ExcitEnergies.push_back(7747.2*keV);
    ExcitSpins.push_back(1.0);
    ExcitLifetimes.push_back(12.0e-3*picosecond);

    ExcitEnergies.push_back(7812.0*keV);
    ExcitSpins.push_back(5.0);
    ExcitLifetimes.push_back(24.0e-3*picosecond);

    ExcitEnergies.push_back(8113.0*keV);
    ExcitSpins.push_back(6.0);
    ExcitLifetimes.push_back(4.0e-3*picosecond);

    ExcitEnergies.push_back(8357.7*keV);
    ExcitSpins.push_back(3.0);
    ExcitLifetimes.push_back(80.0e-3*picosecond);

    ExcitEnergies.push_back(8437.0*keV);
    ExcitSpins.push_back(4.0);
    ExcitLifetimes.push_back(9.0e-3*picosecond);

    ExcitEnergies.push_back(8438.0*keV);
    ExcitSpins.push_back(1.0);
    ExcitLifetimes.push_back(8.0e-3*picosecond);

    ExcitEnergies.push_back(8653.4*keV);
    ExcitSpins.push_back(2.0);
    ExcitLifetimes.push_back(17.0e-3*picosecond);

    ExcitEnergies.push_back(8863.1*keV);
    ExcitSpins.push_back(2.0);
    ExcitLifetimes.push_back(9.0e-3*picosecond);

    ExcitEnergies.push_back(9002.1*keV);
    ExcitSpins.push_back(2.0);
    ExcitLifetimes.push_back(7.6e-3*picosecond);

    ExcitEnergies.push_back(9283.0*keV);
    ExcitSpins.push_back(2.0);
    ExcitLifetimes.push_back(3.0e-3*picosecond);

    ExcitEnergies.push_back(9298.0*keV);
    ExcitSpins.push_back(3.0);
    ExcitLifetimes.push_back(7.0e-3*picosecond);

    ExcitEnergies.push_back(9306.0*keV);
    ExcitSpins.push_back(3.0);
    ExcitLifetimes.push_back(173.0e-3*picosecond);

    ExcitEnergies.push_back(9455.8*keV);
    ExcitSpins.push_back(2.0);
    ExcitLifetimes.push_back(19.0e-3*picosecond);

    ExcitEnergies.push_back(9515.3*keV);
    ExcitSpins.push_back(4.0);
    ExcitLifetimes.push_back(17.0e-3*picosecond);

    ExcitEnergies.push_back(9528.0*keV);
    ExcitSpins.push_back(6.0);
    ExcitLifetimes.push_back(17.0e-3*picosecond);

    ExcitEnergies.push_back(9827.0*keV);
    ExcitSpins.push_back(1.0);
    ExcitLifetimes.push_back(277.0e-6*picosecond);

    ExcitEnergies.push_back(9966.0*keV);
    ExcitSpins.push_back(1.0);
    ExcitLifetimes.push_back(52.0e-6*picosecond);

    ExcitEnergies.push_back(10026.0*keV);
    ExcitSpins.push_back(5.0);
    ExcitLifetimes.push_back(62.0e-3*picosecond);

    ExcitEnergies.push_back(10059.0*keV);
    ExcitSpins.push_back(1.0);
    ExcitLifetimes.push_back(3.0e-3*picosecond);

    ExcitEnergies.push_back(10357.0*keV);
    ExcitSpins.push_back(2.0);
    ExcitLifetimes.push_back(1.5e-3*picosecond);

    ExcitEnergies.push_back(10578.4*keV);
    ExcitSpins.push_back(2.0);
    ExcitLifetimes.push_back(9.0e-3*picosecond);

    ExcitEnergies.push_back(10660.3*keV);
    ExcitSpins.push_back(1.0);
    ExcitLifetimes.push_back(3.0e-3*picosecond);

    ExcitEnergies.push_back(10680.0*keV);
    ExcitSpins.push_back(0.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(1.2*eV));

    ExcitEnergies.push_back(10711.7*keV);
    ExcitSpins.push_back(1.0);
    ExcitLifetimes.push_back(23.0e-6*picosecond);

    ExcitEnergies.push_back(10922.0*keV);
    ExcitSpins.push_back(2.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(2.4*eV));
    
    ExcitEnergies.push_back(11018.0*keV);
    ExcitSpins.push_back(2.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(1.5*eV));
    
    ExcitEnergies.push_back(11217.0*keV);
    ExcitSpins.push_back(4.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(1.1*eV));
    
    ExcitEnergies.push_back(11389.0*keV);
    ExcitSpins.push_back(1.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(500.0*eV));
    
    ExcitEnergies.push_back(11455.0*keV);
    ExcitSpins.push_back(2.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(1.3*eV));
    
    ExcitEnergies.push_back(11456.0*keV);
    ExcitSpins.push_back(0.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(1000.0*eV));
    
    ExcitEnergies.push_back(11520.0*keV);
    ExcitSpins.push_back(2.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(500.0*eV));
    
    ExcitEnergies.push_back(11596.0*keV);
    ExcitSpins.push_back(3.0);
    ExcitLifetimes.push_back(15.0e-3*picosecond);
    
    ExcitEnergies.push_back(11694.0*keV);
    ExcitSpins.push_back(4.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(0.3*eV));
    
    ExcitEnergies.push_back(11727.0*keV);
    ExcitSpins.push_back(0.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(10*keV));

    ExcitEnergies.push_back(11861.0*keV);
    ExcitSpins.push_back(1.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(8.0*keV));
    
    ExcitEnergies.push_back(11963.9*keV);
    ExcitSpins.push_back(2.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(1.8*keV));
    
    ExcitEnergies.push_back(11985.9*keV);
    ExcitSpins.push_back(2.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(20.0*eV));
    
    ExcitEnergies.push_back(12014.4*keV);
    ExcitSpins.push_back(3.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(700.0*eV));
    
    ExcitEnergies.push_back(12048.6*keV);
    ExcitSpins.push_back(4.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(20.0*eV));
    
    ExcitEnergies.push_back(12180.6*keV);
    ExcitSpins.push_back(1.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(50.0*eV));
    
    ExcitEnergies.push_back(12256.7*keV);
    ExcitSpins.push_back(3.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(640.0*eV));
    
    ExcitEnergies.push_back(12257.1*keV);
    ExcitSpins.push_back(2.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(60.0*eV));
    
    ExcitEnergies.push_back(12338.3*keV);
    ExcitSpins.push_back(3.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(70.0*eV));

    ExcitEnergies.push_back(12383.0*keV);
    ExcitSpins.push_back(0.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(7.0*keV));

    ExcitEnergies.push_back(12397.9*keV);
    ExcitSpins.push_back(.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(90.0*eV));
    
    ExcitEnergies.push_back(12402.5*keV);
    ExcitSpins.push_back(.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(100.0*eV));
    
    ExcitEnergies.push_back(12445.0*keV);
    ExcitSpins.push_back(.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(7.0*keV));
    
    ExcitEnergies.push_back(12465.0*keV);
    ExcitSpins.push_back(.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(5.0*keV));
    
    ExcitEnergies.push_back(12525.7*keV);
    ExcitSpins.push_back(.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(7.5*keV));
    
    ExcitEnergies.push_back(12575.0*keV);
    ExcitSpins.push_back(.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(6.0*keV));
    
    ExcitEnergies.push_back(12636.0*keV);
    ExcitSpins.push_back(.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(30.0*eV));
    
    ExcitEnergies.push_back(12658.0*keV);
    ExcitSpins.push_back(.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(500.0*eV));
    
    ExcitEnergies.push_back(12667.4*keV);
    ExcitSpins.push_back(.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(4.0*keV));
    
    ExcitEnergies.push_back(12735.5*keV);
    ExcitSpins.push_back(.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(5.0*keV));

    ExcitEnergies.push_back(12772.0*keV);
    ExcitSpins.push_back(0.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(30.0*keV));
    
    ExcitEnergies.push_back(12805.0*keV);
    ExcitSpins.push_back(2.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(1.2*keV));
    
    ExcitEnergies.push_back(12815.0*keV);
    ExcitSpins.push_back(1.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(1.50*keV));
    
    ExcitEnergies.push_back(12844.1*keV);
    ExcitSpins.push_back(2.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(200.0*eV));
    
    ExcitEnergies.push_back(12849.5*keV);
    ExcitSpins.push_back(2.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(400.0*eV));
    
    ExcitEnergies.push_back(12892.2*keV);
    ExcitSpins.push_back(1.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(300.0*eV));
    
    ExcitEnergies.push_back(12952.7*keV);
    ExcitSpins.push_back(1.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(1.9*keV));
    
    ExcitEnergies.push_back(12961.3*keV);
    ExcitSpins.push_back(2.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(2.7*keV));
    
    ExcitEnergies.push_back(13029.0*keV);
    ExcitSpins.push_back(3.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(800.0*eV));
    
    ExcitEnergies.push_back(13047.3*keV);
    ExcitSpins.push_back(4.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(90.0*eV));

    ExcitEnergies.push_back(13086.0*keV);
    ExcitSpins.push_back(3.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(6.0*keV));
    
    ExcitEnergies.push_back(13135.0*keV);
    ExcitSpins.push_back(2.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(10.0*keV));
    
    ExcitEnergies.push_back(13181.8*keV);
    ExcitSpins.push_back(2.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(6.5*keV));
    
    ExcitEnergies.push_back(15436.4*keV);
    ExcitSpins.push_back(0.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(1.0*keV));

}


G4Mg24GEMProbability::G4Mg24GEMProbability(const G4Mg24GEMProbability &right)
{
  G4Exception("G4Mg24GEMProbability::copy_constructor meant to not be accessable");
}




const G4Mg24GEMProbability & G4Mg24GEMProbability::
operator=(const G4Mg24GEMProbability &right)
{
  G4Exception("G4Mg24GEMProbability::operator= meant to not be accessable");
  return *this;
}


G4bool G4Mg24GEMProbability::operator==(const G4Mg24GEMProbability &right) const
{
  return false;
}

G4bool G4Mg24GEMProbability::operator!=(const G4Mg24GEMProbability &right) const
{
  return true;
}


