// #include "BubbleSort.h"
#include "RecursiveBinarySearch.h"
#include "QuickSort.h"
#include <vector>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void printRes(bool found, vector<int> testVect) {
    if(found) {
        std::cout << "true ";
    } else {
        std::cout << "false ";
    }

    int vectorSize = testVect.size();
    for(int i = 0; i < vectorSize; i++) {
        if(i == vectorSize - 1) {
            std::cout << testVect[i];
        } else {
            std::cout << testVect[i] << " ";
        }
    }
}

int main(void) {
    // Parse input string for integers.
    // Method found from this link:
    // https://discuss.codechef.com/t/input-multiple-integers-in-c-line-in-single-line-with-whitespace/21355/2

    vector<int> intList;
    string input;
    getline(cin, input);
    istringstream is(input);

    int n;
    while(is>>n) {
        intList.push_back(n);
    }

    // Call QuickSort to sort the list
    QuickSort qckSrt;
    intList = qckSrt.sort(intList);

    // Call RecursiveBinarySearch to see if '1' is in sorted list
    RecursiveBinarySearch rbs;
    bool isFound = rbs.search(intList, 1);

    // Format and print the output. true/false + sortedList
    printRes(isFound, intList);

    return 0;
}