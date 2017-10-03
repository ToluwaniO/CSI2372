//TOLUWANI OGUNSANYA 8677256 CSI2372

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main() {
    vector<string> words;
    string word;
    double total = 0;
    double average;
    double st_dev;

    cout << "Enter word: ";
    while (cin >> word)
    {
        if(word == "stop") break;

        words.push_back(word);
        cout << "Enter word: ";
    }

    word = "";

    for (const auto &i : words) {
        word += i + " ";
    }
    cout << word << endl;

    for(string i : words)
    {
        for (char j : i)
        {
            total += int(j);
        }
        average = total/i.size();
        cout << "Mean of " << i << " is: " << average << endl;
        total = 0;
        average = 0;
        for(char j : i)
        {
            total += pow(int(j)-average, 2.0);
        }
        st_dev = sqrt(total/i.size());
        cout << "standard deviation of " << i << " is: " << st_dev << endl;
        st_dev = 0;
        total = 0;
    }
    return 0;
}