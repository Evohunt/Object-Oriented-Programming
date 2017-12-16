#include <iostream>
#include <string>
#include <thread>
#include <chrono>
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

    cout << "Name: " << getName() << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
    cout << "Resistance: " << getResistance() << " / 100" << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
    cout << "Danger rank: " << getDangerRank() << " / 10" << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
    cout << "Classified: " << isClassified() << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));

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

    cout << "Name: " << getName() << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
    cout << "Power: " << getReleasedEnergy() << " megatons" << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
    cout << "Danger rank: " << getDangerRank() << " / 10" << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
    cout << "Classified: " << isClassified() << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));

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

    cout << "Name: " << getName() << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
    cout << "Magazine capacity: " << getMagazineCapacity() << " bullets" << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
    cout << "Danger rank: " << getDangerRank() << " / 10" << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
    cout << "Classified: " << isClassified() << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));

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

    cout << "Name: " << getName() << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
    cout << "Type: " << getType();
    switch (getType()) {

        case 1:
            cout << " (Automatic)\n" << flush;
            this_thread::sleep_for(chrono::microseconds(70000));
            break;

        case 2:
            cout << " (Semi-Automatic)\n" << flush;
            this_thread::sleep_for(chrono::microseconds(70000));
            break;

        case 3:
            cout << " (Hybrid)\n" << flush;
            this_thread::sleep_for(chrono::microseconds(70000));
            break;

        default:
            cout << " (Unknown)\n" << flush;
            this_thread::sleep_for(chrono::microseconds(70000));
            break;

    }
    cout << "Magazine capacity: " << getMagazineCapacity() << " bullets" << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
    cout << "Danger rank: " << getDangerRank() << " / 10" << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
    cout << "Classified: " << isClassified() << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));

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

    cout << "Name: " << getName() << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
    cout << "Overheating: " << getHeatingPoint() << " degrees" << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
    cout << "Type: " << getType();
    switch (getType()) {

        case 1:
            cout << " (Automatic)\n" << flush;
            this_thread::sleep_for(chrono::microseconds(70000));
            break;

        case 2:
            cout << " (Semi-Automatic)\n" << flush;
            this_thread::sleep_for(chrono::microseconds(70000));
            break;

        case 3:
            cout << " (Hybrid)\n" << flush;
            this_thread::sleep_for(chrono::microseconds(70000));
            break;

        default:
            cout << " (Unknown)\n" << flush;
            this_thread::sleep_for(chrono::microseconds(70000));
            break;

    }
    cout << "Magazine capacity: " << getMagazineCapacity() << " bullets" << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
    cout << "Danger rank: " << getDangerRank() << " / 10" << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
    cout << "Classified: " << isClassified() << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));

}




