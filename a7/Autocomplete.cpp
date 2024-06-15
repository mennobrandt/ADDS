#include "Autocomplete.h"
#include <iostream>
using namespace std;

Autocomplete::Autocomplete() {
    root = new TrieNode();
}

vector<string> Autocomplete::getSuggestions(string partialWord) {
    TrieNode* current = root; 
    for(char c:partialWord) {
        size_t index = c - 'a';
        current = current->getChild(index);

        if(!current) {
            return {}; // empty vector
        }
    }

    vector<string> suggestions;
    getEveryWord(current, partialWord, suggestions);
    return suggestions;
}

void Autocomplete::insert(string word) {
    TrieNode* current = root;
    for (char c : word) {
        size_t target = c - 'a';
        if (!current->getChild(target)) {
            current->setChild(target, new TrieNode());
        }
        current = current->getChild(target);
    }
    current->setEndOfWord(true);
}

void Autocomplete::getEveryWord(TrieNode* node, const string& prefix, vector<string> &results) {  
    if (node->getEndOfWord()) {
        results.push_back(prefix);
    }

    for (size_t i = 0; i < 26; ++i) {
        TrieNode* child = node->getChild(i);
        if (child) {
            char c = 'a' + static_cast<char>(i);
            getEveryWord(child,  (prefix + c),results);  
        }
    }
}