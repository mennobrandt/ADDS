#ifndef REFEREE_H
#define REFEREE_H
#include "Player.h"
#include "Move.h"
#include <vector>

class Referee {
    public:
        Player * refGame(Player * player1, Player * player2);
};

#endif