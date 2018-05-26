//
// Created by patryk on 26.05.18.
//

#include "Axe.h"

void Axe::show() {
    cout << numberOfBlades << "-bladed Axe";
}

Axe::Axe(int numberOfBlades) : numberOfBlades(numberOfBlades) {}
