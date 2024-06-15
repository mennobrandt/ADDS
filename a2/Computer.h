#ifndef COMPUTER_H
#define COMPUTER_H
#include <string>
#include "Player.h"
#include "Rock.h"
// rest of includes

class Computer: public Player {
    private: 
        std::string userChoice;
    public:
        Computer();
        Computer(std::string computerName);
        Move * makeMove();
        std::string getName();
};

#endif