//
// Created by oguns on 10/3/2017.
//

#include <iostream>
#include "screen.h"

using std::cout;
using std::endl;
using std::begin;
using std::end;

void printScreen(char (&array)[g_height][g_width]) {
    for (auto &i : array)
    {
        for (auto &j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void clearScreen(char (&array)[g_height][g_width]) {
    for (auto &i : array)
    {
        for (auto &j : i)
        {
            j = ' ';
        }
    }
}

void gridScreen(char (&array)[g_height][g_width], int nHlines, int nVlines) {
    if(nHlines < 0) nHlines = 0;
    if(nVlines < 0) nVlines = 0;
    if(nHlines > g_width) {
        cout << "Invalid width, changing value to default" << endl;
        nHlines = g_width;
    }
    if(nVlines > g_height) {
        cout << "Invalid height, changing value to default" << endl;
        nVlines = g_height;
    }

    clearScreen(array);

    for (int i = 0; i < nVlines; i++)
    {
        for (int j = 0; j < nHlines; ++j) {
            array[i][j] = '*';
        }
    }
}

void gridScreen(char (&array)[g_height][g_width], int horizontal) {
    gridScreen(array, horizontal, horizontal);
}

