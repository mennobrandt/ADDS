#include "BagOfHolding.h"
#include <cstdlib> // for randomly removing item...

// Idea is that it returns -1 if it's not in the bag. 
// Otherwise, it returns the index of where the element is. 
template <class T>
int BagOfHolding<T>::contains(T value) {
    for(size_t i = 0; i < elements.size(); i++) {
        if(elements.at(i) == value) {
            return i; // return index
        }
    }
    return -1;
}

template <class T>
void BagOfHolding<T>::addItem(T value) {
    // If bag contains item, i.e. contain() gives something other than -1, return.
    if (contains(value) != -1) {
        return;
    } 
    // in all other cases, add it to bag. 
    elements.push_back(value);
}

template <class T>
void BagOfHolding<T>::removeItem(T value) {
    if(contains(value) != -1) {
        // item is in bag, so remove it, using index returned from contains()
        elements.erase(contains(value)); 
    } 
}

template <class T>
void BagOfHolding<T>::removeRandomItem() {
    // Choose index randomly. Between 0 and (vectorSize-1)
    int randIndex = rand() % (elements.size() - 1);
    elements.erase(randIndex);
}