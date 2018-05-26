//
// Created by patryk on 26.05.18.
//

#ifndef ZALICZENIE_ORC_H
#define ZALICZENIE_ORC_H

#include <iostream>
#include "Weapon.h"

using namespace std;

class Orc {
public:
    string name;
    Weapon *weapon = nullptr;

    Orc(const string &name);

    int fightWithOrc(const Orc &orc);

    void introduceYourself();

    void takeWeapon(Weapon *weapon);

    void putWeaponAway();
};


#endif //ZALICZENIE_ORC_H
