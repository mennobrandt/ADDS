#include "PrefixMatcher.h"
using namespace std;

PrefixMatcher::PrefixMatcher() {
    root = new TrieNodeIP();
}

int PrefixMatcher::selectRouter(string networkAddress) {
    TrieNodeIP* current = root;
    int maxMatch = -1;
    for(char c: networkAddress) {
        int index = c - '0';

        if(current->getChild(index) == nullptr) {
            break;
        }

        current = current->getChild(index);

        if((current->getRouterNumber()) != -1) {
            maxMatch = current->getRouterNumber();
        }
    }

    return maxMatch;
}

void PrefixMatcher::insert(string address, int routerNumber) {
    TrieNodeIP* current = root;
    for (char c : address) {
        int index = c - '0';  
        if ((current->getChild(index)) == nullptr) {
            current->setChild(index, new TrieNodeIP());
        }
        
        current = current->getChild(index);
    }
    current->setRouterNumber(routerNumber);
}