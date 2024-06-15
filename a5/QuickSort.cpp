#include "QuickSort.h"
using namespace std;

vector<int> QuickSort::sort(vector<int> list) {
    // should rewrite to swap elements instead
    // modify lecture code
    // don't populate arrays, 
    // ...just use indexes
    if (list.size() <= 1) {
        return list;
    }

    vector<int> left;
    vector<int> right;

    int lSize = list.size();

    // Decide on pivotIndex.
    // 3rd element, if list is big enough. Or, chooses last element. 
    if(lSize >= 3) {
        pivotIndex = 2;
    } else if(lSize < 3) {
        pivotIndex = (lSize - 1);
    }

    int pivotVal = list[pivotIndex];

    // Loop through and append values to either left or right vector
    for (int i = 0; i < lSize; i++) {
        if (i != pivotIndex) {
            if (list[i] < pivotVal) {
                left.push_back(list[i]);
            } else {
                right.push_back(list[i]);
            }
        }
    }

    // Recursively sort and combine left, right
    left = sort(left);
    right = sort(right);
    left.push_back(pivotVal);
    left.insert(left.end(), right.begin(), right.end());

    return left;
}
