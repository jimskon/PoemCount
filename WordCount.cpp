
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
    
