//
// Created by Zacha on 2023-08-22.
//
#include <iostream>
#include "../header/overworld.h"
#include "../header/prints.h"

using namespace std;

void Overworld::startGame() {
    moveTile();
}

void Overworld::moveTile() {
    /*
        Grass = 0-15
        Marsh = 16-40
        Volcano = 41-70
        Hell = 71-105
        Castle = 106-150
    */

    while (area <= 151) {
        switch (choice(1)) {
            case 0:
                cout << "Move" << endl;
                break;
            case 1:
                for (Heroes* & hero : heroes) {
                    hero->display();
                }
            case 2:
                return;

        }
    }
}