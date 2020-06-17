// 
// *  This file was automatically generated by MoMEMta-MaGMEE,
// *  A MadGraph Matrix Element Exporter plugin for MoMEMta.
// *
// *  It is subject to MoMEMta-MaGMEE's license and copyright:
// *
// *  Copyright (C) 2016  Universite catholique de Louvain (UCL), Belgium
// *
// *  This program is free software: you can redistribute it and/or modify
// *  it under the terms of the GNU General Public License as published by
// *  the Free Software Foundation, either version 3 of the License, or
// *  (at your option) any later version.
// *
// *  This program is distributed in the hope that it will be useful,
// *  but WITHOUT ANY WARRANTY; without even the implied warranty of
// *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// *  GNU General Public License for more details.
// *
// *  You should have received a copy of the GNU General Public License
// *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
// 

#pragma once

#include <complex> 
#include <vector> 
#include <utility> 
#include <map> 
#include <functional> 

#include <Parameters_sm.h> 
#include <SubProcess.h> 

#include <momemta/MatrixElement.h> 

namespace ttbarMuMu_sm 
{

//==========================================================================
// A class for calculating the matrix elements for
// Process: g g > t t~ WEIGHTED<=2 @1
// *   Decay: t > w+ b WEIGHTED<=2
// *     Decay: w+ > mu+ vm WEIGHTED<=2
// *   Decay: t~ > w- b~ WEIGHTED<=2
// *     Decay: w- > mu- vm~ WEIGHTED<=2
// Process: u u~ > t t~ WEIGHTED<=2 @1
// *   Decay: t > w+ b WEIGHTED<=2
// *     Decay: w+ > mu+ vm WEIGHTED<=2
// *   Decay: t~ > w- b~ WEIGHTED<=2
// *     Decay: w- > mu- vm~ WEIGHTED<=2
// Process: c c~ > t t~ WEIGHTED<=2 @1
// *   Decay: t > w+ b WEIGHTED<=2
// *     Decay: w+ > mu+ vm WEIGHTED<=2
// *   Decay: t~ > w- b~ WEIGHTED<=2
// *     Decay: w- > mu- vm~ WEIGHTED<=2
// Process: d d~ > t t~ WEIGHTED<=2 @1
// *   Decay: t > w+ b WEIGHTED<=2
// *     Decay: w+ > mu+ vm WEIGHTED<=2
// *   Decay: t~ > w- b~ WEIGHTED<=2
// *     Decay: w- > mu- vm~ WEIGHTED<=2
// Process: s s~ > t t~ WEIGHTED<=2 @1
// *   Decay: t > w+ b WEIGHTED<=2
// *     Decay: w+ > mu+ vm WEIGHTED<=2
// *   Decay: t~ > w- b~ WEIGHTED<=2
// *     Decay: w- > mu- vm~ WEIGHTED<=2
//--------------------------------------------------------------------------

class P1_Sigma_sm_gg_mupvmbmumvmxbx: public momemta::MatrixElement 
{
  public:

    // Constructor & destructor
    P1_Sigma_sm_gg_mupvmbmumvmxbx(const ParameterSet& configuration); 
    virtual ~P1_Sigma_sm_gg_mupvmbmumvmxbx() {}; 

    // Calculate flavour-independent parts of cross section.
    virtual momemta::MatrixElement::Result compute(
    const std::pair < std::vector<double> , std::vector<double> >
        &initialMomenta,
    const std::vector < std::pair < int, std::vector<double> > > &finalState); 

    virtual std::shared_ptr < momemta::MEParameters > getParameters() 
    {
      return params; 
    }

    // Make sure all helicity combinations are tried again (forget optimisation
    // consisting of not evaluating helicities which have given a zero result
    // once)
    virtual void resetHelicities(); 

  private:

    // default constructor should be hidden
    P1_Sigma_sm_gg_mupvmbmumvmxbx() = delete; 

    // list of helicities combinations
    const int helicities[256][8] = {{-1, -1, -1, -1, -1, -1, -1, -1}, {-1, -1,
        -1, -1, -1, -1, -1, 1}, {-1, -1, -1, -1, -1, -1, 1, -1}, {-1, -1, -1,
        -1, -1, -1, 1, 1}, {-1, -1, -1, -1, -1, 1, -1, -1}, {-1, -1, -1, -1,
        -1, 1, -1, 1}, {-1, -1, -1, -1, -1, 1, 1, -1}, {-1, -1, -1, -1, -1, 1,
        1, 1}, {-1, -1, -1, -1, 1, -1, -1, -1}, {-1, -1, -1, -1, 1, -1, -1, 1},
        {-1, -1, -1, -1, 1, -1, 1, -1}, {-1, -1, -1, -1, 1, -1, 1, 1}, {-1, -1,
        -1, -1, 1, 1, -1, -1}, {-1, -1, -1, -1, 1, 1, -1, 1}, {-1, -1, -1, -1,
        1, 1, 1, -1}, {-1, -1, -1, -1, 1, 1, 1, 1}, {-1, -1, -1, 1, -1, -1, -1,
        -1}, {-1, -1, -1, 1, -1, -1, -1, 1}, {-1, -1, -1, 1, -1, -1, 1, -1},
        {-1, -1, -1, 1, -1, -1, 1, 1}, {-1, -1, -1, 1, -1, 1, -1, -1}, {-1, -1,
        -1, 1, -1, 1, -1, 1}, {-1, -1, -1, 1, -1, 1, 1, -1}, {-1, -1, -1, 1,
        -1, 1, 1, 1}, {-1, -1, -1, 1, 1, -1, -1, -1}, {-1, -1, -1, 1, 1, -1,
        -1, 1}, {-1, -1, -1, 1, 1, -1, 1, -1}, {-1, -1, -1, 1, 1, -1, 1, 1},
        {-1, -1, -1, 1, 1, 1, -1, -1}, {-1, -1, -1, 1, 1, 1, -1, 1}, {-1, -1,
        -1, 1, 1, 1, 1, -1}, {-1, -1, -1, 1, 1, 1, 1, 1}, {-1, -1, 1, -1, -1,
        -1, -1, -1}, {-1, -1, 1, -1, -1, -1, -1, 1}, {-1, -1, 1, -1, -1, -1, 1,
        -1}, {-1, -1, 1, -1, -1, -1, 1, 1}, {-1, -1, 1, -1, -1, 1, -1, -1},
        {-1, -1, 1, -1, -1, 1, -1, 1}, {-1, -1, 1, -1, -1, 1, 1, -1}, {-1, -1,
        1, -1, -1, 1, 1, 1}, {-1, -1, 1, -1, 1, -1, -1, -1}, {-1, -1, 1, -1, 1,
        -1, -1, 1}, {-1, -1, 1, -1, 1, -1, 1, -1}, {-1, -1, 1, -1, 1, -1, 1,
        1}, {-1, -1, 1, -1, 1, 1, -1, -1}, {-1, -1, 1, -1, 1, 1, -1, 1}, {-1,
        -1, 1, -1, 1, 1, 1, -1}, {-1, -1, 1, -1, 1, 1, 1, 1}, {-1, -1, 1, 1,
        -1, -1, -1, -1}, {-1, -1, 1, 1, -1, -1, -1, 1}, {-1, -1, 1, 1, -1, -1,
        1, -1}, {-1, -1, 1, 1, -1, -1, 1, 1}, {-1, -1, 1, 1, -1, 1, -1, -1},
        {-1, -1, 1, 1, -1, 1, -1, 1}, {-1, -1, 1, 1, -1, 1, 1, -1}, {-1, -1, 1,
        1, -1, 1, 1, 1}, {-1, -1, 1, 1, 1, -1, -1, -1}, {-1, -1, 1, 1, 1, -1,
        -1, 1}, {-1, -1, 1, 1, 1, -1, 1, -1}, {-1, -1, 1, 1, 1, -1, 1, 1}, {-1,
        -1, 1, 1, 1, 1, -1, -1}, {-1, -1, 1, 1, 1, 1, -1, 1}, {-1, -1, 1, 1, 1,
        1, 1, -1}, {-1, -1, 1, 1, 1, 1, 1, 1}, {-1, 1, -1, -1, -1, -1, -1, -1},
        {-1, 1, -1, -1, -1, -1, -1, 1}, {-1, 1, -1, -1, -1, -1, 1, -1}, {-1, 1,
        -1, -1, -1, -1, 1, 1}, {-1, 1, -1, -1, -1, 1, -1, -1}, {-1, 1, -1, -1,
        -1, 1, -1, 1}, {-1, 1, -1, -1, -1, 1, 1, -1}, {-1, 1, -1, -1, -1, 1, 1,
        1}, {-1, 1, -1, -1, 1, -1, -1, -1}, {-1, 1, -1, -1, 1, -1, -1, 1}, {-1,
        1, -1, -1, 1, -1, 1, -1}, {-1, 1, -1, -1, 1, -1, 1, 1}, {-1, 1, -1, -1,
        1, 1, -1, -1}, {-1, 1, -1, -1, 1, 1, -1, 1}, {-1, 1, -1, -1, 1, 1, 1,
        -1}, {-1, 1, -1, -1, 1, 1, 1, 1}, {-1, 1, -1, 1, -1, -1, -1, -1}, {-1,
        1, -1, 1, -1, -1, -1, 1}, {-1, 1, -1, 1, -1, -1, 1, -1}, {-1, 1, -1, 1,
        -1, -1, 1, 1}, {-1, 1, -1, 1, -1, 1, -1, -1}, {-1, 1, -1, 1, -1, 1, -1,
        1}, {-1, 1, -1, 1, -1, 1, 1, -1}, {-1, 1, -1, 1, -1, 1, 1, 1}, {-1, 1,
        -1, 1, 1, -1, -1, -1}, {-1, 1, -1, 1, 1, -1, -1, 1}, {-1, 1, -1, 1, 1,
        -1, 1, -1}, {-1, 1, -1, 1, 1, -1, 1, 1}, {-1, 1, -1, 1, 1, 1, -1, -1},
        {-1, 1, -1, 1, 1, 1, -1, 1}, {-1, 1, -1, 1, 1, 1, 1, -1}, {-1, 1, -1,
        1, 1, 1, 1, 1}, {-1, 1, 1, -1, -1, -1, -1, -1}, {-1, 1, 1, -1, -1, -1,
        -1, 1}, {-1, 1, 1, -1, -1, -1, 1, -1}, {-1, 1, 1, -1, -1, -1, 1, 1},
        {-1, 1, 1, -1, -1, 1, -1, -1}, {-1, 1, 1, -1, -1, 1, -1, 1}, {-1, 1, 1,
        -1, -1, 1, 1, -1}, {-1, 1, 1, -1, -1, 1, 1, 1}, {-1, 1, 1, -1, 1, -1,
        -1, -1}, {-1, 1, 1, -1, 1, -1, -1, 1}, {-1, 1, 1, -1, 1, -1, 1, -1},
        {-1, 1, 1, -1, 1, -1, 1, 1}, {-1, 1, 1, -1, 1, 1, -1, -1}, {-1, 1, 1,
        -1, 1, 1, -1, 1}, {-1, 1, 1, -1, 1, 1, 1, -1}, {-1, 1, 1, -1, 1, 1, 1,
        1}, {-1, 1, 1, 1, -1, -1, -1, -1}, {-1, 1, 1, 1, -1, -1, -1, 1}, {-1,
        1, 1, 1, -1, -1, 1, -1}, {-1, 1, 1, 1, -1, -1, 1, 1}, {-1, 1, 1, 1, -1,
        1, -1, -1}, {-1, 1, 1, 1, -1, 1, -1, 1}, {-1, 1, 1, 1, -1, 1, 1, -1},
        {-1, 1, 1, 1, -1, 1, 1, 1}, {-1, 1, 1, 1, 1, -1, -1, -1}, {-1, 1, 1, 1,
        1, -1, -1, 1}, {-1, 1, 1, 1, 1, -1, 1, -1}, {-1, 1, 1, 1, 1, -1, 1, 1},
        {-1, 1, 1, 1, 1, 1, -1, -1}, {-1, 1, 1, 1, 1, 1, -1, 1}, {-1, 1, 1, 1,
        1, 1, 1, -1}, {-1, 1, 1, 1, 1, 1, 1, 1}, {1, -1, -1, -1, -1, -1, -1,
        -1}, {1, -1, -1, -1, -1, -1, -1, 1}, {1, -1, -1, -1, -1, -1, 1, -1},
        {1, -1, -1, -1, -1, -1, 1, 1}, {1, -1, -1, -1, -1, 1, -1, -1}, {1, -1,
        -1, -1, -1, 1, -1, 1}, {1, -1, -1, -1, -1, 1, 1, -1}, {1, -1, -1, -1,
        -1, 1, 1, 1}, {1, -1, -1, -1, 1, -1, -1, -1}, {1, -1, -1, -1, 1, -1,
        -1, 1}, {1, -1, -1, -1, 1, -1, 1, -1}, {1, -1, -1, -1, 1, -1, 1, 1},
        {1, -1, -1, -1, 1, 1, -1, -1}, {1, -1, -1, -1, 1, 1, -1, 1}, {1, -1,
        -1, -1, 1, 1, 1, -1}, {1, -1, -1, -1, 1, 1, 1, 1}, {1, -1, -1, 1, -1,
        -1, -1, -1}, {1, -1, -1, 1, -1, -1, -1, 1}, {1, -1, -1, 1, -1, -1, 1,
        -1}, {1, -1, -1, 1, -1, -1, 1, 1}, {1, -1, -1, 1, -1, 1, -1, -1}, {1,
        -1, -1, 1, -1, 1, -1, 1}, {1, -1, -1, 1, -1, 1, 1, -1}, {1, -1, -1, 1,
        -1, 1, 1, 1}, {1, -1, -1, 1, 1, -1, -1, -1}, {1, -1, -1, 1, 1, -1, -1,
        1}, {1, -1, -1, 1, 1, -1, 1, -1}, {1, -1, -1, 1, 1, -1, 1, 1}, {1, -1,
        -1, 1, 1, 1, -1, -1}, {1, -1, -1, 1, 1, 1, -1, 1}, {1, -1, -1, 1, 1, 1,
        1, -1}, {1, -1, -1, 1, 1, 1, 1, 1}, {1, -1, 1, -1, -1, -1, -1, -1}, {1,
        -1, 1, -1, -1, -1, -1, 1}, {1, -1, 1, -1, -1, -1, 1, -1}, {1, -1, 1,
        -1, -1, -1, 1, 1}, {1, -1, 1, -1, -1, 1, -1, -1}, {1, -1, 1, -1, -1, 1,
        -1, 1}, {1, -1, 1, -1, -1, 1, 1, -1}, {1, -1, 1, -1, -1, 1, 1, 1}, {1,
        -1, 1, -1, 1, -1, -1, -1}, {1, -1, 1, -1, 1, -1, -1, 1}, {1, -1, 1, -1,
        1, -1, 1, -1}, {1, -1, 1, -1, 1, -1, 1, 1}, {1, -1, 1, -1, 1, 1, -1,
        -1}, {1, -1, 1, -1, 1, 1, -1, 1}, {1, -1, 1, -1, 1, 1, 1, -1}, {1, -1,
        1, -1, 1, 1, 1, 1}, {1, -1, 1, 1, -1, -1, -1, -1}, {1, -1, 1, 1, -1,
        -1, -1, 1}, {1, -1, 1, 1, -1, -1, 1, -1}, {1, -1, 1, 1, -1, -1, 1, 1},
        {1, -1, 1, 1, -1, 1, -1, -1}, {1, -1, 1, 1, -1, 1, -1, 1}, {1, -1, 1,
        1, -1, 1, 1, -1}, {1, -1, 1, 1, -1, 1, 1, 1}, {1, -1, 1, 1, 1, -1, -1,
        -1}, {1, -1, 1, 1, 1, -1, -1, 1}, {1, -1, 1, 1, 1, -1, 1, -1}, {1, -1,
        1, 1, 1, -1, 1, 1}, {1, -1, 1, 1, 1, 1, -1, -1}, {1, -1, 1, 1, 1, 1,
        -1, 1}, {1, -1, 1, 1, 1, 1, 1, -1}, {1, -1, 1, 1, 1, 1, 1, 1}, {1, 1,
        -1, -1, -1, -1, -1, -1}, {1, 1, -1, -1, -1, -1, -1, 1}, {1, 1, -1, -1,
        -1, -1, 1, -1}, {1, 1, -1, -1, -1, -1, 1, 1}, {1, 1, -1, -1, -1, 1, -1,
        -1}, {1, 1, -1, -1, -1, 1, -1, 1}, {1, 1, -1, -1, -1, 1, 1, -1}, {1, 1,
        -1, -1, -1, 1, 1, 1}, {1, 1, -1, -1, 1, -1, -1, -1}, {1, 1, -1, -1, 1,
        -1, -1, 1}, {1, 1, -1, -1, 1, -1, 1, -1}, {1, 1, -1, -1, 1, -1, 1, 1},
        {1, 1, -1, -1, 1, 1, -1, -1}, {1, 1, -1, -1, 1, 1, -1, 1}, {1, 1, -1,
        -1, 1, 1, 1, -1}, {1, 1, -1, -1, 1, 1, 1, 1}, {1, 1, -1, 1, -1, -1, -1,
        -1}, {1, 1, -1, 1, -1, -1, -1, 1}, {1, 1, -1, 1, -1, -1, 1, -1}, {1, 1,
        -1, 1, -1, -1, 1, 1}, {1, 1, -1, 1, -1, 1, -1, -1}, {1, 1, -1, 1, -1,
        1, -1, 1}, {1, 1, -1, 1, -1, 1, 1, -1}, {1, 1, -1, 1, -1, 1, 1, 1}, {1,
        1, -1, 1, 1, -1, -1, -1}, {1, 1, -1, 1, 1, -1, -1, 1}, {1, 1, -1, 1, 1,
        -1, 1, -1}, {1, 1, -1, 1, 1, -1, 1, 1}, {1, 1, -1, 1, 1, 1, -1, -1},
        {1, 1, -1, 1, 1, 1, -1, 1}, {1, 1, -1, 1, 1, 1, 1, -1}, {1, 1, -1, 1,
        1, 1, 1, 1}, {1, 1, 1, -1, -1, -1, -1, -1}, {1, 1, 1, -1, -1, -1, -1,
        1}, {1, 1, 1, -1, -1, -1, 1, -1}, {1, 1, 1, -1, -1, -1, 1, 1}, {1, 1,
        1, -1, -1, 1, -1, -1}, {1, 1, 1, -1, -1, 1, -1, 1}, {1, 1, 1, -1, -1,
        1, 1, -1}, {1, 1, 1, -1, -1, 1, 1, 1}, {1, 1, 1, -1, 1, -1, -1, -1},
        {1, 1, 1, -1, 1, -1, -1, 1}, {1, 1, 1, -1, 1, -1, 1, -1}, {1, 1, 1, -1,
        1, -1, 1, 1}, {1, 1, 1, -1, 1, 1, -1, -1}, {1, 1, 1, -1, 1, 1, -1, 1},
        {1, 1, 1, -1, 1, 1, 1, -1}, {1, 1, 1, -1, 1, 1, 1, 1}, {1, 1, 1, 1, -1,
        -1, -1, -1}, {1, 1, 1, 1, -1, -1, -1, 1}, {1, 1, 1, 1, -1, -1, 1, -1},
        {1, 1, 1, 1, -1, -1, 1, 1}, {1, 1, 1, 1, -1, 1, -1, -1}, {1, 1, 1, 1,
        -1, 1, -1, 1}, {1, 1, 1, 1, -1, 1, 1, -1}, {1, 1, 1, 1, -1, 1, 1, 1},
        {1, 1, 1, 1, 1, -1, -1, -1}, {1, 1, 1, 1, 1, -1, -1, 1}, {1, 1, 1, 1,
        1, -1, 1, -1}, {1, 1, 1, 1, 1, -1, 1, 1}, {1, 1, 1, 1, 1, 1, -1, -1},
        {1, 1, 1, 1, 1, 1, -1, 1}, {1, 1, 1, 1, 1, 1, 1, -1}, {1, 1, 1, 1, 1,
        1, 1, 1}};

    // Private functions to calculate the matrix element for all subprocesses
    // Wavefunctions
    void calculate_wavefunctions(const int perm[], const int hel[]); 
    std::complex<double> amp[4]; 

    // Matrix elements
    double matrix_1_gg_ttx_t_wpb_wp_mupvm_tx_wmbx_wm_mumvmx(); 
    double matrix_1_uux_ttx_t_wpb_wp_mupvm_tx_wmbx_wm_mumvmx(); 

    // map of final states
    std::map < std::vector<int> , std::vector < SubProcess <
        P1_Sigma_sm_gg_mupvmbmumvmxbx >> > mapFinalStates;

    // Reference to the model parameters instance passed in the constructor
    std::shared_ptr < Parameters_sm > params; 

    // vector with external particle masses
    std::vector < std::reference_wrapper<double> > mME; 

    // vector with momenta (to be changed each event)
    double * momenta[8]; 
}; 


}

