#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player {
    protected: 
        std::string playerName;
        char playerMove;
    public:
        // pure virtual funcs
        virtual char makeMove()=0;
        virtual std::string getName()=0;

        char getPlayerMove();
};

#endif