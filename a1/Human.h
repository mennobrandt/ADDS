#ifndef HUMAN_H
#define HUMAN_H
#include <string>
#include "Player.h"

class Human: public Player {
    public:
        Human();
        Human(std::string humanName);
        char makeMove();
        std::string getName();
};

#endif