#include "TrieNodeIP.h"

int TrieNodeIP::getRouterNumber() {
    return routerNumber;
}

void TrieNodeIP::setRouterNumber(int number) {
    routerNumber = number;
}

TrieNodeIP* TrieNodeIP::getChild(int index) {
    if(index < 0) {
        if(index > 1) {
            return nullptr;
        }
        return nullptr;
    }
    return children[index];
}

void TrieNodeIP::setChild(int index, TrieNodeIP* node) {
    if(index >= 0) {
        if(index <= 1) {
            children[index] = node;
        }
    }
}