//
// Created by patryk on 26.05.18.
//

#ifndef ZALICZENIE_WEAPON_H
#define ZALICZENIE_WEAPON_H

#include <iostream>

using namespace std;

class Weapon {
public:
    bool isHandledBySomebody = false;

    virtual void show() = 0;
};


#endif //ZALICZENIE_WEAPON_H
