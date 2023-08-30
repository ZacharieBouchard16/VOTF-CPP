//
// Created by Zacha on 2023-08-22.
//

#ifndef RPG_V4_OVERWORLD_H
#define RPG_V4_OVERWORLD_H

#include <vector>
#include "Heroes.h"

class Overworld {
private:

    static Overworld* instancePTR;

    Overworld(){

    };
public:
    int area = 0;
    vector<Heroes*> heroes;

    static Overworld* getInstance() {
        if (instancePTR == NULL) {
            instancePTR = new Overworld();
        }
        return instancePTR;
    }

    void startGame();
    void moveTile();
};



//Inventory


#endif //RPG_V4_OVERWORLD_H
