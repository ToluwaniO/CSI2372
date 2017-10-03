// ==========================================================================
// $Id: show.h,v 1.1 2016/09/09 21:39:07 jlang Exp $
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
// $Log: show.h,v $
// Revision 1.1  2016/09/09 21:39:07  jlang
// Created new intro lab 0
//
// Revision 1.1  2015/09/23 15:00:33  jlang
// ==========================================================================
#ifndef SHOW_H_
#define SHOW_H_

#include <string>

using std::string;

namespace InputOut {
  void show(int iVal);
  void show(string sVal);
}

#endif

