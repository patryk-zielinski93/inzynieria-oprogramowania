//
// Created by patryk on 26.05.18.
//

#ifndef ZALICZENIE_AXE_H
#define ZALICZENIE_AXE_H


#include "Weapon.h"

class Axe : public Weapon {
public:
    int numberOfBlades;

    Axe(int numberOfBlades = 1);

    void show();
};


#endif //ZALICZENIE_AXE_H
