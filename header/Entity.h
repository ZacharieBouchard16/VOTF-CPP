//
// Created by Zacha on 2023-08-22.
//

#ifndef RPG_V4_ENTITY_H
#define RPG_V4_ENTITY_H

#include <iostream>
#include <utility>
#include <vector>
#include "Attack.h"

using namespace std;

class Entity {
public:
    string name;
    int health[2]{}; // [0] = current | [1] = max
    int strength;
    int defense;
    int intelligence;
    int speed;
    int luck;
    int mana[2]{}; //[0] = current | [1] = max

    int level;

    vector<Attack*> attacks;
     Entity(string _name, int _health, int _strength, int _defense, int _intelligence, int _speed, int _luck, int _level, vector<Attack*> _attacks) {
        name = std::move(_name);
        health[1] = health[0] = _health;
        strength = _strength;
        defense = _defense;
        intelligence = _intelligence;
        speed = _speed;
        luck = _luck;
        level = _level;
        attacks = _attacks;

         for (auto & attack : attacks) {
             if (attack->type == "Magic" || attack->type == "Heal") {
                 attack->damage += intelligence / 3;
             }
             else {
                 attack->damage += strength / 2;
             }
         }
     }
     string getHealth();
     string getMana();
     static int generateNumber(int offset, int range);
     virtual string getAction() = 0;
     //virtual Entity* getTarget() = 0;

};


#endif //RPG_V4_ENTITY_H
