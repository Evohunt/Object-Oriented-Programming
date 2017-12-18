#include <iostream>
#include "lab7.h"

using namespace std;

Persoana :: Student :: Student(double medie) {

    this -> medie = medie;

}

void Persoana :: Student :: setMedie(double medie) {

    this -> medie = medie;

}

double Persoana :: Student :: getMedie() {

    return this -> medie;

}
