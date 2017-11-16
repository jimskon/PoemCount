#include <iostream>
#include <algorithm>
#include "CountWords.h"

CountWords::CountWords() {
}

void CountWords::addWord(string word) {
    if (word.length() > 0) {

        int index = findWord(uniqueWords, word);
        if (index >= 0) {
            uniqueWords[index].inc();
        } else {
            WordCount w = WordCount(word);
            uniqueWords.push_back(w);
        }
    }
}

void CountWords::display() {
    for (int i =0;i<uniqueWords.size(); i++) {
        cout << uniqueWords[i].getWord() << ":" << uniqueWords[i].getCount() << endl;
    }
}

bool compare(WordCount a, WordCount b) {
    return a.getWord() < b.getWord();
}
void CountWords::sort() {
    std::sort(uniqueWords.begin(),uniqueWords.end(),compare);
}
int CountWords::findWord(vector<WordCount> words, string word) {

    for (int i = 0; i < words.size(); i++) {
        if (word == words[i].getWord()) {
            return i;
        }
    }
    return -1;
}