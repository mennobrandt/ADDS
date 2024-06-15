#include "Truckloads.h"
#include <cmath> // for floor() to round down
#include <iostream>
using namespace std;

// -	numCrates will be between 2 and 10,000, inclusive.
// -	loadSize loadSize will be be between 1 and (numCrates - 1), inclusive.

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if(numCrates <= loadSize) {
        return 1;
    }

    // Rounded down number of crates
    int rdNumCrates = floor(numCrates / 2); 

    return numTrucks(rdNumCrates, loadSize) + numTrucks(numCrates - rdNumCrates, loadSize);
}