#include <iostream>
#include "Axe.h"
#include "Sword.h"
#include "Orc.h"

int main() {
    cout << "Weapons: " << endl;
    Axe axe1(1);
    Axe axe2(2);
    Sword sword1(Hilt(10), Blade(true));
    Sword sword2;

    axe1.show();
    cout << endl;

    axe2.show();
    cout << endl;

    sword1.show();
    cout << endl;

    sword2.show();
    cout << endl;

    cout << endl << "Orcs: " << endl;

    Orc orc1("Janusz");
    Orc orc2("Grazynka");

    orc1.introduceYourself();
    orc2.introduceYourself();

    orc1.takeWeapon(&axe1);
    orc1.introduceYourself();

    orc2.takeWeapon(&axe1);
    orc2.introduceYourself();

    orc2.takeWeapon(&sword1);
    orc2.introduceYourself();

    Orc orc3("Konstanty");
    orc3.takeWeapon(&sword2);
    orc3.introduceYourself();
    orc3.putWeaponAway();
    orc3.introduceYourself();

    Orc orc4("Walenty");
    orc4.introduceYourself();

    cout << endl << "Fights: " << endl;
    orc1.fightWithOrc(orc2);
    orc1.fightWithOrc(orc3);
    orc1.fightWithOrc(orc4);
    orc4.fightWithOrc(orc3);
    orc3.fightWithOrc(orc2);

    return 0;
}
