#include <iostream>
#include <string>
#include <cmath>
#include "oldstring.h"

using namespace std;


int main() {
    string words;
    int i = 0;

    while(true){
        cout << "Enter word:" << endl;
        string newWord;
        cin >> newWord;

        if(newWord == "stop")
        {
            cout << words << endl;
            break;
        }
        words += newWord + " ";
        i++;
    }
    const char *wordsList = words.c_str();
    string newWord;
    oldstring oSt;

    while(true)
    {
        newWord = oSt.getWord(wordsList);
        if(newWord.empty()) break;

        const char *point = newWord.c_str();
        double average = oSt.mean(point);
        double dev = oSt.stDev(point, average);
        cout << "Mean of " << newWord << ": " << average << endl;
        cout << "Standard Deviation of " << newWord << ": " << dev << endl;
        cout << endl;
        wordsList += newWord.size()+1;
    }
    return 0;
}