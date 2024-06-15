#include "TrieNode.h"
using namespace std;

TrieNode::TrieNode() {
    endOfWord = false;
    children = std::vector<TrieNode*>(26, nullptr);
}

bool TrieNode::getEndOfWord() {
    return endOfWord;
}

void TrieNode::setEndOfWord(bool val) {
    endOfWord = val;
    return;
}

TrieNode* TrieNode::getChild(size_t target) {
    if(target < 0) {
        if(target >= children.size()) {
            return nullptr;
        }
    }
    return children[target];
}

void TrieNode::setChild(size_t target, TrieNode* node) {
    if(target >= 0) {
        if(target < children.size()) {
            children[target] = node;
        }
    }
    return;
}