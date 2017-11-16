#include <string>

using namespace std;
#ifndef WORDCOUNT_H
#define WORDCOUNT_H
class WordCount {
private:
    string word;
    int count;
public:
    WordCount ();
    WordCount(string W);
    void inc();
    int getCount();
    string getWord();
 
};
#endif /* WORDCOUNT_H */

