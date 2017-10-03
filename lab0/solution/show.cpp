// ==========================================================================
// $Id: show.cpp,v 1.1 2016/09/09 21:39:07 jlang Exp $
// CSI2372 Solution code for laboratory 0
// ==========================================================================
// (C)opyright:
//
//   Jochen Lang
//   EECS, University of Ottawa
//   800 King Edward Ave.
//   Ottawa, On., K1N 6N5
//   Canada. 
//   http://www.eecs.uottawa.ca
// 
// Creator: jlang (Jochen Lang)
// Email:   jlang@eecs.uottawa.ca
// ==========================================================================
// $Log: show.cpp,v $
// Revision 1.1  2016/09/09 21:39:07  jlang
// Created new intro lab 0
//
// ==========================================================================
#include <iostream>
#include "show.h"

namespace InputOut {
  
  void show( int iVal ) {
    std::cout << "Printing the integer to the console: " << std::endl;
    std::cout << iVal << std::endl;
    return;
  }
  
  void show( string sVal ) {
    std::cout << "Printing the string to the console: " << std::endl;
    std::cout << sVal << std::endl;
    return;
  }
}
