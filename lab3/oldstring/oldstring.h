//
// Created by oguns on 9/26/2017.
//
#include <string>

#ifndef LAB3_OLDSTRING_H
#define LAB3_OLDSTRING_H


class oldstring {

public:
    double mean(const char *word);
    double stDev(const char *word, double mean);
    std::string getWord(const char *words);
};


#endif //LAB3_OLDSTRING_H
