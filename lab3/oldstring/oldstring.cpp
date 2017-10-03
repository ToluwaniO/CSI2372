//
// Created by oguns on 9/26/2017.
//

#include "oldstring.h"
#include <cmath>

using namespace std;

string oldstring::getWord(const char *words) {
    string word;
    int count = 0;

    while(*words != ' ' && *words != '\0')
    {
        word += *words;
        ++words;

    }

    return word;
}

double oldstring::mean(const char *word) {
    int codeCount = 0;
    int size = 0;

    while(*word != 0)
    {
        codeCount += int(*word);
        size++;
        ++word;
    }
    return codeCount/size;
}

double oldstring::stDev(const char *word, double mean) {
    double codeCount = 0.0;
    int size = 0;

    while(*word != 0)
    {
        auto ascii = int(*word);
        codeCount += pow(ascii-mean, 2.0);
        size++;
        ++word;
    }
    return sqrt(codeCount/size);
}