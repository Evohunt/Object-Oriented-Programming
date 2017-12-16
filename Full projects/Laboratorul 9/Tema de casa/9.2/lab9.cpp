#include <iostream>
#include <stdlib.h>
#include "lab9.h"

using namespace std;

/// --- Weapon --- ///
int Weapon::getDangerRank() {

    return this -> dangerRank;

}

bool Weapon::isClassified() {

    return this -> classified;

}

void Weapon::printWeapon() {

    cout << "N/A" << '\n';

}

string Weapon::getName() {

    return this -> name;

}

/// --- Weapon > Sling --- ///
int Sling::getDangerRank() {

    return this -> dangerRank;

}

bool Sling::isClassified() {

    return this -> classified;

}

int Sling::getResistance() {

    return this -> resistance;

}

void Sling::printWeapon() {

    cout << "Name: " << getName() << '\n';
    cout << "Resistance: " << getResistance() << " / 100" << '\n';
    cout << "Danger rank: " << getDangerRank() << " / 10" << '\n';
    cout << "Classified: " << isClassified() << '\n';

}

/// --- Weapon > AtomicBomb --- ///
int AtomicBomb::getDangerRank() {

    return this -> dangerRank;

}

bool AtomicBomb::isClassified() {

    return this -> classified;

}

int AtomicBomb::getReleasedEnergy() {

    return this -> releasedEnergy;

}

void AtomicBomb::printWeapon() {

    cout << "Name: " << getName() << '\n';
    cout << "Power: " << getReleasedEnergy() << " megatons" << '\n';
    cout << "Danger rank: " << getDangerRank() << " / 10" << '\n';
    cout << "Classified: " << isClassified() << '\n';

}

/// --- Weapon > Gun --- ///
int Gun::getDangerRank() {

    return this -> dangerRank;

}

bool Gun::isClassified() {

    return this -> classified;

}

int Gun::getMagazineCapacity() {

    return this -> magazineCapacity;

}

void Gun::printWeapon() {

    cout << "Name: " << getName() << '\n';
    cout << "Magazine capacity: " << getMagazineCapacity() << " bullets" << '\n';
    cout << "Danger rank: " << getDangerRank() << " / 10" << '\n';
    cout << "Classified: " << isClassified() << '\n';

}

/// --- Weapon > Gun > Rifle --- ///
int Rifle::getDangerRank() {

    return this -> dangerRank;

}

bool Rifle::isClassified() {

    return this -> classified;

}

int Rifle::getType() {

    return this -> type;

}

void Rifle::printWeapon() {

    cout << "Name: " << getName() << '\n';
    cout << "Type: " << getType();
    switch (getType()) {

        case 1:
            cout << " (Automatic)\n";
            break;

        case 2:
            cout << " (Semi-Automatic)\n";
            break;

        case 3:
            cout << " (Hybrid)\n";
            break;

        default:
            cout << " (Unknown)\n";
            break;

    }
    cout << "Magazine capacity: " << getMagazineCapacity() << " bullets" << '\n';
    cout << "Danger rank: " << getDangerRank() << " / 10" << '\n';
    cout << "Classified: " << isClassified() << '\n';

}

/// --- Weapon > Gun > Rifle > MachineGun --- ///
int MachineGun::getDangerRank() {

    return this -> dangerRank;

}

bool MachineGun::isClassified() {

    return this -> classified;

}

int MachineGun::getHeatingPoint() {

    return this -> heatingPoint;

}

void MachineGun::printWeapon() {

    cout << "Name: " << getName() << '\n';
    cout << "Overheating: " << getHeatingPoint() << " degrees" << '\n';
    cout << "Type: " << getType();
    switch (getType()) {

        case 1:
            cout << " (Automatic)\n";
            break;

        case 2:
            cout << " (Semi-Automatic)\n";
            break;

        case 3:
            cout << " (Hybrid)\n";
            break;

        default:
            cout << " (Unknown)\n";
            break;

    }
    cout << "Magazine capacity: " << getMagazineCapacity() << " bullets" << '\n';
    cout << "Danger rank: " << getDangerRank() << " / 10" << '\n';
    cout << "Classified: " << isClassified() << '\n';

}




