// ==========================================================================
// $Id: read_input.cpp,v 1.1 2016/09/09 21:39:07 jlang Exp $
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
// $Log: read_input.cpp,v $
// Revision 1.1  2016/09/09 21:39:07  jlang
// Created new intro lab 0
//
// ==========================================================================
#include <iostream>
#include "read_input.h"

namespace InputOut {
  
  int readInt() 
  {
    std::cout << "Please enter an integer:" << std::endl;
    int iVal;
    std::cin >> iVal;
    if (std::cin.fail()) return 0;
    return iVal;
  }
  
  string readString() 
  {
    std::cout << "Please enter a string:" << std::endl;
    string sVal;
    std::cin >> sVal;
    return sVal;
  }

}
