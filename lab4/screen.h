//
// Created by oguns on 10/3/2017.
//

#ifndef LAB4_SCREEN_H
#define LAB4_SCREEN_H

class screen {
private:
    static const int g_width = 40;
    static const int g_height = 20;

public:
    screen() = default;
    void printScreen(char (&array)[g_height][g_width]);
    void clearScreen(char (&array)[g_height][g_width]);
    void gridScreen(char (&array)[g_height][g_width], int horizontal, int vertical);

};


#endif //LAB4_SCREEN_H
