#include "Computer.h"
using namespace std;

Computer::Computer() {
    playerName = "Computer";
}

Computer::Computer(std::string computerName) {
    playerName = computerName;
}

Move * Computer::makeMove() {
    return new Rock();
}

string Computer::getName() {
    return playerName;
}
