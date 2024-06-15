#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H
#include <vector>
#include <string>
#include "TrieNode.h" // tree data struct

class Autocomplete {
    private:
        TrieNode* root;
        void getEveryWord(TrieNode* node, const std::string &prefix, std::vector<std::string> &resList);


    public:
        Autocomplete();
        // return the known words that start with the partial word
        std::vector<std::string> getSuggestions(std::string partialWord);
        // add a word to the known words
        void insert(std::string word);
};

#endif