#include "EfficientTruckloads.h"
#include <cmath>

int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {
    storedTrucks.resize(2000, std::vector<int>(2000, -1));
    
    // Base Case:
    if(numCrates <= loadSize) {
        return 1;
    }
    
    // If it has been calculated before...
    if(storedTrucks[numCrates][loadSize] != -1) {
        return storedTrucks[numCrates][loadSize];
    } 

    // It hasn't been calculated before...
    int rdNumCrates = floor(numCrates / 2); 
    int neededTrucks = numTrucks(rdNumCrates, loadSize) + numTrucks(numCrates - rdNumCrates, loadSize);

    storedTrucks[numCrates][loadSize] = neededTrucks;
    return neededTrucks;
}