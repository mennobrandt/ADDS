#include <iostream>
#include "Human.h"
using namespace std;

Human::Human() {
    playerName = "Human";
}

Human::Human(std::string humanName) {
    playerName = humanName;
}

Move * Human::makeMove() {
    cin >> userChoice;

    if(userChoice == "Rock") {
        return new Rock();
    } else if (userChoice == "Scissors") {
        return new Scissors();
    } else if (userChoice == "Paper") {
        return new Paper();
    } else if (userChoice == "Zombie") {
        return new Zombie();
    } else if (userChoice == "Robot") {
        return new Robot();
    } else if (userChoice == "Ninja") {
        return new Ninja();
    } else if (userChoice == "Pirate") {
        return new Pirate();
    } else if (userChoice == "Monkey") {
        return new Monkey();
    }
    return nullptr;
}

string Human::getName() {
    return playerName;
}
