// ==========================================================================
// $Id: main.cpp,v 1.1 2016/09/09 21:39:07 jlang Exp $
// CSI2372 Solution code for laboratory 0
// ==========================================================================
// (C)opyright:
//
//   Jochen Lang
//   SITE, University of Ottawa
//   800 King Edward Ave.
//   Ottawa, On., K1N 6N5
//   Canada. 
//   http://www.eecs.uottawa.ca
// 
// Creator: jlang (Jochen Lang)
// Email:   jlang@eecs.uottawa.ca
// ==========================================================================
// $Log: main.cpp,v $
// Revision 1.1  2016/09/09 21:39:07  jlang
// Created new intro lab 0
//
// ==========================================================================
#include <string>

#include "read_input.h"
#include "show.h"

using std::string;
using namespace InputOut;

int main() 
{
  int iVal = readInt();
  show(iVal);
  string sVal = readString(); 
  show(sVal);    
  return 0;
}

