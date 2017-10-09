//
// Created by oguns on 10/3/2017.
//

#ifndef LAB4_SCREEN_H
#define LAB4_SCREEN_H

static const int g_width = 40;
static const int g_height = 20;

void printScreen(char (&array)[g_height][g_width]);
void clearScreen(char (&array)[g_height][g_width]);
void gridScreen(char (&array)[g_height][g_width], int horizontal, int vertical);
void gridScreen(char (&array)[g_height][g_width], int horizontal);

#endif //LAB4_SCREEN_H
