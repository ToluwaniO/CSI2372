//
// Created by oguns on 10/3/2017.
//

#include <iostream>
#include "screen.h"

using std::cout;
using std::endl;

using std::begin;
using std::end;

void screen::printScreen(char (&array)[g_height][g_width]) {
    for (auto &i : array)
    {
        for (auto &j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void screen::clearScreen(char (&array)[g_height][g_width]) {
    for (auto &i : array)
    {
        for (auto &j : i)
        {
            j = ' ';
        }
    }
}

void screen::gridScreen(char (&array)[g_height][g_width], int nHlines, int nVlines=-1) {

}

