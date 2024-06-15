#include "RecursiveBinarySearch.h"
#include <vector>
#include <iostream>
//#include <cmath> // for floor(), ceil()
using namespace std;

bool RecursiveBinarySearch::tail_search(vector<int> list, int target, int start, int end) {
    if(start > end) {
        return false;
    }
    
    int mid = (start + end) / 2; // middle index

    if(list[mid] == target) { // base case
        return true;
    } else {
        if(list[mid] < target) { // if to the left
            return tail_search(list, target, mid+1, end);
        } else {
            return tail_search(list, target, start, (mid-1));
        }
    }
}

bool RecursiveBinarySearch::search(std::vector<int> list, int target) {
    // Call the tail recursive function tail_search.
    // This acts as a helper function.
    // initially, we pass in the start and index of our list 
    int endIndex = list.size() - 1;
    bool found = tail_search(list, target, 0, endIndex);
    return found;
}