#include <iostream>
#include <stdlib.h>
#include "lab9.h"

using namespace std;

/// --- Plant --- ///
string Plant::getName() {

    return this -> name;

}

/// --- Plant > Carrot --- ///
string Carrot::getName() {

    return this -> name;

}

int Carrot::getVitaminsNumber() {

    return this -> vitaminsNumber;

}

/// --- FoodSource --- ///
int FoodSource::getQuality() {

    return this -> quality;

}

/// --- FoodSource > Chicken --- ///
int Chicken::getQuality() {

    return this -> quality;

}

int Chicken::getAge() {

    return this -> age;

}

/// --- Plant, FoodSource > Apple --- ///
string Apple::getName() {

    return this -> name;

}

int Apple::getQuality() {

    return this -> quality;

}

string Apple::getColor() {

    return this -> color;

}







