// ==========================================================================
// $Id: read_input.h,v 1.1 2016/09/09 21:39:07 jlang Exp $
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
// $Log: read_input.h,v $
// Revision 1.1  2016/09/09 21:39:07  jlang
// Created new intro lab 0
//
// ==========================================================================
#ifndef READ_INPUT_H_
#define READ_INPUT_H_

#include <string>

using std::string;

namespace InputOut {
  int readInt();
  string readString();
}
#endif
