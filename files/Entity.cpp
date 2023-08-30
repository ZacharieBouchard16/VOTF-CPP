//
// Created by Zacha on 2023-08-22.
//

#include "../header/Entity.h"

string Entity::getHealth() {
    return "HP: " + to_string(health[0]) + "/" + to_string(health[1]);
}

string Entity::getMana() {
    return "MP: " + to_string(mana[0]) + "/" + to_string(mana[1]);
}

int Entity::generateNumber(int offset, int range) {
    srand((unsigned) time(nullptr));

    return offset + (rand() % range);
}

