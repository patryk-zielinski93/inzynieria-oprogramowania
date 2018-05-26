//
// Created by patryk on 26.05.18.
//

#ifndef ZALICZENIE_SWORD_H
#define ZALICZENIE_SWORD_H


#include "Hilt.h"
#include "Blade.h"
#include "Weapon.h"

class Sword : public Weapon {
public:
    Hilt hilt;
    Blade blade;

    Sword(const Hilt &hilt = Hilt(), const Blade &blade = Blade());

    void show();
};


#endif //ZALICZENIE_SWORD_H
