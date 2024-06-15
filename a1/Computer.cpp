#include "Computer.h"
#include <iostream>
using namespace std;

Computer::Computer() {
    playerName = "Computer";
}

char Computer::makeMove() {
    playerMove = 'R';
    return playerMove;
}

string Computer::getName() {
    return playerName;
}