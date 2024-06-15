#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H
#include "TrieNodeIP.h"
#include <string>

class PrefixMatcher {
    private:
        TrieNodeIP* root;
    public:
        PrefixMatcher();
        // return the router with the longest matching prefix
        int selectRouter(std::string networkAddress);
        // add a router address
        void insert(std::string address, int routerNumber);

};


#endif