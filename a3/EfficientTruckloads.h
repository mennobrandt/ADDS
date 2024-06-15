#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H
#include <vector>

class EfficientTruckloads {
    // eftr(numCrates) = numTrucks;
    // store [numCrates][numTrucks]
    // if numCrates is in vector  
    private:
        // 2d array
        std::vector<std::vector<int>> storedTrucks;
    public:
        int numTrucks(int numCrates, int loadSize);
};

#endif