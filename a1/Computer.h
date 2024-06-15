#ifndef COMPUTER_H
#define COMPUTER_h
#include <string>
#include "Player.h"

class Computer: public Player {
    public:
        Computer(); 
        std::string getName();
        char makeMove();
};

#endif