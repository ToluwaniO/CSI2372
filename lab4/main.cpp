// ==========================================================================
// $Id: main.cpp,v 1.3 2017/10/02 22:35:20 jlang Exp $
// CSI2372 Lab 4 solution code 
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
// $Log: main.cpp,v $
// Revision 1.3  2017/10/02 22:35:20  jlang
// Clearer main
//
// Revision 1.2  2017/09/29 04:34:12  jlang
// centered grid
//
// Revision 1.1  2017/09/28 21:11:46  jlang
// draft
//
// ==========================================================================
#include <iostream>
#include "screen.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
    screen sc;
    char screen[20][40];

    for (int i = 0; i < 20; ++i) {
        for (int j = 0; j < 40; ++j) {
            screen[i][j] = static_cast<char>(40);
        }
    }
    cout << "printing..." << endl;
    sc.printScreen(screen);
    cout << "Clearing..." << endl;
    sc.clearScreen(screen);
    cout << "Printing again..." << endl;
    sc.printScreen(screen);
    cout << "Done!" << endl;
//    sc.clearScreen( screen );
//    int hLines, vLines;
//    cout << "No. of Horizontal and Vertical Lines: "; cin >> hLines; cout << endl;
//    gridScreen( screen, hLines );
//    printScreen( screen );
//    // No clear screen
//    cout << "Drawing new grid over old grid:" << endl;
//    cout << "No. of Horizontal Lines: "; cin >> hLines;
//    cout << "No. of Vertical Lines: "; cin >> vLines; cout << endl;
//    gridScreen( screen, hLines, vLines );
//    printScreen( screen );
//    clearScreen( screen );
    return 0;
}
    
  

