#include "Move.h"
#include <string>
#include "Move.h"
using namespace std;

string Move::getName() {
    return moveName;
}

vector<string> Move::getWinList() {
    return winsAgainst;    
}