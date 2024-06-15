#ifndef TRIENODE_H
#define TRIENODE_H
#include <vector>
#include <string>
//#include "Autocomplete.h"

class TrieNode {
    private:
        std::vector<TrieNode*> children;
        bool endOfWord;
    public:
        TrieNode();
        bool getEndOfWord();
        void setEndOfWord(bool val);
        TrieNode* getChild(size_t target);
        void setChild(size_t target, TrieNode* node);
};  

#endif