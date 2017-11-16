
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "CountWords.h"

using namespace std;
const string POEMFILE = "EmilyDickinson1.txt";

vector<string> getWords(string line);
string RemoveSpecials(string str);

int main() {
    CountWords cw;
    ifstream poems;

    poems.open(POEMFILE);
    if (poems.fail()) {
        cout << "Couldn't open: " << POEMFILE << endl;
        exit(1);
    }
    string line;
    vector<string> words;
    int countWords = 0;
    while (!poems.eof()) {
        getline(poems, line);
        line = RemoveSpecials(line);
        words = getWords(line);
        for (int i = 0; i<words.size(); i++) {
            cw.addWord(words.at(i));
        }
    }
    cw.sort();
    cw.display();
    return 0;
}

vector<string> getWords(string line) {
    istringstream iss(line);
    vector<string> words;
    string s;
    do {
        iss >> s;
        if (s.length() > 0 && s != " ") {
            words.push_back(s);
            //cout << s << " ";
        }
        s="";
    } while (iss);
    return words;

}

string RemoveSpecials(string str) {
    int i = 0, len = str.length();
    while (i < len) {
        char c = str[i];
        if (((c >= '0')&&(c <= '9')) || ((c >= 'A')&&(c <= 'Z')) || ((c >= 'a')&&(c <= 'z')) || c == '\'' || c == ' ') {
            if ((c >= 'A')&&(c <= 'Z')) str[i] += 32; //Assuming dictionary contains small letters only.
            ++i;
        } else {
            str.erase(i, 1);
            --len;
        }
    }
    return str;
}

