#ifndef BAGOFHOLDING_H
#define BAGOFHOLDING_H
#include <vector>

template <class T>
class BagOfHolding {
    private:
        std::vector<T> elements; // elements in bag
    public:
        // Does it contain this value?
        int contains(T value); // returns -1 if it doesnt contain. Else, it returns index of element. 
        // Add (append) item to bag.
        void addItem(T value);
        // Remove item that matches parameter.
        void removeItem(T value);
        // Remove random item from bag
        void removeRandomItem();
};

#endif