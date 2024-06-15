#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "Sort.h"
#include <vector>

class QuickSort: public Sort {
    private:
        int pivotIndex;
        // instead of member variables, I just define them in the scope of std::vector<int> sort()
        //std::vector<int> left;
        //std::vector<int> right;
    public:
        std::vector<int> sort(std::vector<int> list);
};

#endif