#ifndef REVERSER_H
#define REVERSER_H
#include <string>

// Tail Recursive Strategy

class Reverser {
    private: 
        // Private Tail Recursive Functions
        int reverseDigit(int value, int acc);
        std::string reverseString(std::string characters, std::string acc);
    public:
        // Public Helper Functions
        int reverseDigit(int value);
        std::string reverseString(std::string characters); 
}; 

#endif