#ifndef MOVE_H
#define MOVE_H

#include <string>
#include <vector>

class Move {
    protected:
        std::string moveName;
        std::vector<std::string> winsAgainst;
    public:
        std::vector<std::string> getWinList();
        std::string getName();
};

#endif