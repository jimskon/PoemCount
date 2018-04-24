
#ifndef STOPWORDS_H
#define STOPWORDS_H
#include <string>
#include <vector>

using namespace std;

class StopWords {
public:
    StopWords();
    bool lookup(string word);
private:
    vector<string> stopwords;

};

#endif /* STOPWORDS_H */

