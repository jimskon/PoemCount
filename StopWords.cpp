#include <iostream>
#include <fstream>
#include "StopWords.h"
const string stopwordsfile = "stopwords.txt";


StopWords::StopWords() {
    ifstream sw;
    string word;
    sw.open(stopwordsfile.c_str());
    if (sw.fail()) {
        cout << "Can't open: " << stopwordsfile << endl;
    }
    while (!sw.fail() && !sw.eof()) {
        sw >> word;
        stopwords.push_back(word);
    }
}

bool StopWords::lookup(string word) {
    for (int i = 0; i < stopwords.size(); i++) {
        if (word == stopwords.at(i)) {
            return true;
        }
    }
    return false;    
}