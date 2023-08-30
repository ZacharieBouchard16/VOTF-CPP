//
// Created by Zacha on 2023-08-23.
//

#include "../header/Heroes.h"
#include "../header/prints.h"

string Heroes::getAction() {
    return to_string(choice(5));
}

void Heroes::display() {
    printf("\t %-16s Health: %-9s Mana: %-9s Strength: %-4d Defense: %-4d Intelligence: %-4d Speed: %-4d Luck: %-4d\n Attacks:", name.c_str(), getHealth().c_str(), getMana().c_str(), strength, defense, intelligence, speed, luck);
    for (auto & attack : attacks) {
        printf("\n \t- %-16s Damage: %-4d Accuracy: %-4d Cost: %d mana Type: %-4s", attack->name.c_str(), attack->damage, attack->accuracy, attack->cost, attack->type.c_str());
    }

}
