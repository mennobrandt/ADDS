#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include "Move.h"

class Player {
    protected:
        std::string playerName; 
    public:
        virtual Move * makeMove()=0;
        virtual std::string getName()=0;
};

#endif