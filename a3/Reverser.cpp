#include <string>
#include "Reverser.h"
#include <typeinfo>
using namespace std;

// Reverse Digit

int Reverser::reverseDigit(int value) {
    // Validate input. Must be non-negative. 
    if(value < 0) {
        return -1;
    }
    
    return reverseDigit(value, 0);
}

int Reverser::reverseDigit(int value, int acc) {
    if(value <= 0) {
        return acc;
    }

    int currentDigit = value % 10;
    acc = currentDigit + (10 * acc);
    return reverseDigit(value / 10, acc);
}

// Reverse String

string Reverser::reverseString(string characters) {
    if(characters.length() <= 0) {
        return "ERROR";
    }
    return reverseString(characters, "");
}

string Reverser::reverseString(std::string characters, std::string acc) {
    if(characters.length() <= 1) {
        return characters+acc;
    }

    return reverseString(characters.substr(1), characters[0] + acc);
}