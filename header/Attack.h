//
// Created by Zacha on 2023-08-23.
//

#ifndef RPG_V4_ATTACK_H
#define RPG_V4_ATTACK_H

#include <iostream>

using namespace std;

class Attack {
public:
    string name;
    int damage;
    int accuracy;
    int cost;

    string type; //Physical, Magic, True

    Attack(string _name, int _damage, int _accuracy, int _cost, string _type) {
        name = _name;
        damage = _damage;
        accuracy = _accuracy;
        cost = _cost;
        type = _type;
    }
};


#endif //RPG_V4_ATTACK_H
