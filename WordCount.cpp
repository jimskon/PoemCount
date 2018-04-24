
#include "WordCount.h"
    WordCount::WordCount (){
        word = "";
        count = 0;
    }
    WordCount::WordCount(string w){
        word = w;
        count = 1;
    }
    void WordCount::inc() {
        count++;
    }
    int WordCount::getCount(){
        return count;
    }
    string WordCount::getWord(){
        return word;
    }
    
    bool operator<(WordCount w1, WordCount w2) {
        return (w1.count>w2.count);
    }
    
