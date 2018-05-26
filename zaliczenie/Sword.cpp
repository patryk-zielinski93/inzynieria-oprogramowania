//
// Created by patryk on 26.05.18.
//

#include "Sword.h"

Sword::Sword(const Hilt &hilt, const Blade &blade) : hilt(hilt), blade(blade) {}

void Sword::show() {
    if (blade.isDoubleSided) {
        cout << "Double Edged Sword, hilts wight " << hilt.weight;
    } else {
        cout << "Single Edged Sword, hilts wight " << hilt.weight;
    }
}
