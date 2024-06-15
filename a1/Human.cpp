#include "Human.h"
#include <iostream>
using namespace std;

// No parameter given
Human::Human() {
    playerName = "Human";
}

Human::Human(string customName) {
    // set name to parameter
    playerName = customName;
}

// Redefinition of pure virtual functions
char Human::makeMove() {
    // take input for move
    cout << "Enter Move: ";
    cin >> playerMove;
    return playerMove;
}

string Human::getName() {
    return playerName;
}