#include <iostream>
#include "lab7.h"

using namespace std;

Persoana :: Persoana(string nume, int varsta) {

    this -> nume = nume;
    this -> varsta = varsta;

}

void Persoana :: setNume(string nume) {

    this -> nume = nume;

}

void Persoana :: setVarsta(int varsta) {

    this -> varsta = varsta;

}

string Persoana :: getNume() {

    return this -> nume;

}

int Persoana :: getVarsta() {

    return this -> varsta;

}
