//
// Created by Zacha on 2023-08-23.
//

#ifndef RPG_V4_HEROES_H
#define RPG_V4_HEROES_H


#include <utility>
#include "Entity.h"
#include "Attack.h"

class Heroes: public Entity {
public:
    Heroes(string _name, int _health, int _strength, int _defense, int _intelligence, int _speed, int _luck, int _level, vector<Attack*> _attacks) :
            Entity(_name,
                  _health,
                  _strength,
                  _defense,
                  _intelligence,
                  _speed,
                  _luck,
                  _level,
                  _attacks) {
        mana[1] = mana[0] = 100 + intelligence * 3;
    }
    string getAction() override;
    void display();
};

#endif //RPG_V4_HEROES_H
