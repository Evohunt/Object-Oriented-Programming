#include <iostream>
#include "lab7.h"

using namespace std;

Persoana :: Parinte :: Sofer :: Sofer(string masina, string tipPermis) {

    this -> masina = masina;
    this -> tipPermis = tipPermis;

}

void Persoana :: Parinte :: Sofer :: setMasina(string masina) {

    this -> masina = masina;

}

string Persoana :: Parinte :: Sofer :: getMasina() {

    return this -> masina;

}

void Persoana :: Parinte :: Sofer :: setTipPermis(string tipPermis) {

    this -> tipPermis = tipPermis;

}

string Persoana :: Parinte :: Sofer :: getTipPermis() {

    return this -> tipPermis;

}

