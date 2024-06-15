#include "BubbleSort.h"
#include <algorithm> // for swapping elements

std::vector<int> BubbleSort::sort(std::vector<int> list) {
    int swapCount = 0;
    bool unsorted = true;
    int vSize = list.size(); // added so i < list.size() works

    if(vSize < 2) {
        return list;
    }
    
    while(unsorted) {
        swapCount = 0;
        for(int i = 1; i < vSize; i++) {
            if(list[i-1] > list[i]) {
                // swap the two elements
                iter_swap(list.begin() + (i-1), list.begin() + i);
                swapCount++;
            } 
        }

        if(swapCount == 0) {
            unsorted = false;
        }
    }
    return list; // shouldnt really reach this condition
}