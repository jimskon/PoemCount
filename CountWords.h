#include <string>
#include <vector>
#include "WordCount.h"
#include "StopWords.h"

#ifndef COUNTWORDS_H
#define COUNTWORDS_H

class CountWords {
public:
    CountWords();
    void addWord(string word);
    void display();
    void sort();

private:
    vector<WordCount> uniqueWords;
    int findWord(vector<WordCount> words, string word);
    StopWords theStopWords;

};

#endif /* COUNTWORDS_H */

