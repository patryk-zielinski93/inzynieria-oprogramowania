//
// Created by patryk on 26.05.18.
//

#include "Orc.h"

Orc::Orc(const string &name) : name(name) {}

int Orc::fightWithOrc(const Orc &orc) {
    if (weapon != nullptr && orc.weapon == nullptr) {
        cout << "Orc " << name << " wins with " << orc.name << endl;
    } else if ((weapon != nullptr && orc.weapon != nullptr) || (weapon == orc.weapon)) {
        cout << "Orc " << name << " ties with " << orc.name << endl;
    } else {
        cout << "Orc " << name << " loses with " << orc.name << endl;
    }
    return 0;
}

void Orc::introduceYourself() {
    cout << "My name is " << name << ". ";

    if (weapon == nullptr) {
        cout << "My hands are my weapons." << endl;
    } else {
        cout << "My weapon is ";
        weapon->show();
        cout << "." << endl;
    }
}

void Orc::takeWeapon(Weapon *weap) {
    if (!weap->isHandledBySomebody) {
        weapon = weap;
        weapon->isHandledBySomebody = true;
    } else {
        weap->show();
        cout << " is handled by someone else." << endl;
    }
}

void Orc::putWeaponAway() {
    weapon->isHandledBySomebody = false;
    weapon = nullptr;
}
