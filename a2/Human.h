#ifndef HUMAN_H
#define HUMAN_H
#include <string>

#include "Player.h"
#include "Rock.h"
#include "Scissors.h"
#include "Paper.h"
#include "Zombie.h"
#include "Robot.h"
#include "Ninja.h"
#include "Pirate.h"
#include "Monkey.h"

// rest of includes

class Human: public Player {
    private: 
        std::string userChoice;
    public:
        Human();
        Human(std::string humanName);
        Move * makeMove();
        std::string getName();
};

#endif