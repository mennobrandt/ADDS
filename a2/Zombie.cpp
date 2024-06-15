#include "Zombie.h"
#include <vector>

Zombie::Zombie() {
    moveName = "Zombie";
    winsAgainst.push_back("Pirate");
    winsAgainst.push_back("Monkey");
}