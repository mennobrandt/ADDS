#ifndef TRIENODEIP_H
#define TRIENODEIP_H
#include <vector>

class TrieNodeIP {
    private:
        TrieNodeIP* children[2] = {nullptr, nullptr}; 
        int routerNumber = -1;  
    public:
        int getRouterNumber();
        void setRouterNumber(int routerNumber);
        TrieNodeIP* getChild(int index);
        void setChild(int index, TrieNodeIP* node);
};  

#endif