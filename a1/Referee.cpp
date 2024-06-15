#include "Referee.h"
#include <iostream>

Referee::Referee() {

}

Player* Referee::refGame(Player* p1, Player* p2) {
    // make moves
    p1->makeMove();
    p2->makeMove();

    char m1 = p1->getPlayerMove();
    char m2 = p2->getPlayerMove();

    if(m1 == m2) {
        //std::cout << "tie";
        return nullptr;
    } else if (m1 == 'R' && m2 == 'S') {
        //std::cout << "p1 wins";
        return p1;
    } else if (m1 == 'R' && m2 == 'P') {
        //std::cout << "p2 wins";
        return p2;
    } else if (m1 == 'S' && m2 == 'R') {
        //std::cout << "p2 wins";
        return p2;
    } else if (m1 == 'S' && m2 == 'P') {
        //std::cout << "p1 wins";
        return p1;
    } else if (m1 == 'P' && m2 == 'R') {
        //std::cout << "p1 wins";
        return p1;
    } else if (m1 == 'P' && m2 == 'S') {
        //std::cout << "p2 wins";
        return p2;
    }
    return nullptr;
}