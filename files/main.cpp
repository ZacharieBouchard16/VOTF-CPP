#include <iostream>
#include "../header/overworld.h"
#include "../header/prints.h"

Overworld* Overworld ::instancePTR = NULL;

Overworld* over = Overworld::getInstance();

void initChristopher() {
    vector<Attack*> attacks;

    attacks.emplace_back(new Attack {
            "Slash",
            10,
            100,
            0,
            "Physical"
    });
    attacks.emplace_back(new Attack {
            "Flames",
            20,
            100,
            20,
            "Magic"
    });

   over->heroes.emplace_back(new Heroes(
            "Christopher",
            Entity::generateNumber(250, 11),
            Entity::generateNumber(15, 6),
            Entity::generateNumber(10, 3),
            8,
            Entity::generateNumber(7, 3),
            Entity::generateNumber(8, 2),
            1,
            attacks));


}

void initMarquis() {
    vector<Attack*> attacks;

    attacks.emplace_back(new Attack{
            "Shoot",
            15,
            100,
            0,
            "Physical"
    });
    attacks.emplace_back(new Attack{
            "Piercing Arrow",
            30,
            100,
            45,
            "True"
    });

    over->heroes.emplace_back(new Heroes(
            "Marquis",
            Entity::generateNumber(190, 11),
            Entity::generateNumber(7, 2),
            Entity::generateNumber(10, 3),
            8,
            Entity::generateNumber(15, 6),
            Entity::generateNumber(10, 3),
            1,
            attacks));

}

void initEnyad() {
    vector<Attack*> attacks;

    attacks.emplace_back(new Attack{
            "Whack",
            5,
            100,
            0,
            "Physical"
    });
    attacks.emplace_back(new Attack{
            "Heal",
            30,
            100,
            20,
            "Heal"
    });

    over->heroes.emplace_back(new Heroes(
            "Enyad",
            Entity::generateNumber(250, 11),
            Entity::generateNumber(6, 3),
            Entity::generateNumber(10, 3),
            Entity::generateNumber(20, 6),
            Entity::generateNumber(10, 3),
            Entity::generateNumber(9, 2),
            1,
            attacks));
}

void newGame() {
    initChristopher();
    over->startGame();
}

void continueGame() {
    over->startGame();
}

int main() {
    printTitleScreen();
    switch (choice(0)) {
        case 0:
            newGame();
            break;
        case 1:
            continueGame();
            break;
        default:
            cout << "Quitting...";
            wait(5000);
            return 0;
    }
}