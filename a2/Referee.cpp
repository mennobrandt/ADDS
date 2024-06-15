#include "Referee.h"
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

Player * Referee::refGame(Player * player1, Player * player2) {
    Move* p1Move = player1->makeMove();
    Move * p2Move = player2->makeMove();

    vector<string> p1WinList = p1Move->getWinList();
    string p2Name = p2Move->getName();

    if(p1Move->getName() == p2Move->getName()) {
        // if equal return null pointer
        return nullptr;
    } else if (std::find(p1WinList.begin(), p1WinList.end(), p2Name) != p1WinList.end()) {
        // if player 2's name, is in the of moves that player1 beats
        return player1;
    } else {
        return player2;
    }
}