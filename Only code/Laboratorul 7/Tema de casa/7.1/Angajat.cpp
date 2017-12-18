#include <iostream>
#include "lab7.h"

using namespace std;

Persoana :: Parinte :: Sofer :: Angajat :: Angajat(int salariu, string meserie) {

    this -> salariu = salariu;
    this -> meserie = meserie;

}

void Persoana :: Parinte :: Sofer :: Angajat :: setSalariu(int salariu) {

    this -> salariu = salariu;

}

int Persoana :: Parinte :: Sofer :: Angajat :: getSalariu() {

    return this -> salariu;

}

void Persoana :: Parinte :: Sofer :: Angajat :: setMeserie(string meserie) {

    this -> meserie = meserie;

}

string Persoana :: Parinte :: Sofer :: Angajat :: getMeserie() {

    return this -> meserie;

}

