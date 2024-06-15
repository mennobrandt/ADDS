#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H
#include <vector>

class RecursiveBinarySearch {
    public:
        // tail recursive binarysearch. But, doesn't use accumulator. 
        // takes list, target index, st
        bool tail_search(std::vector<int> list, int target, int start, int end);
        // helper function
        bool search(std::vector<int> list, int target);
};

#endif