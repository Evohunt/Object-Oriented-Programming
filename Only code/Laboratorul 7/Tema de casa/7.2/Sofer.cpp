#include <iostream>
#include "lab7.h"

using namespace std;

Persoana :: Student :: Sofer :: Sofer(string masina) {

    this -> masina = masina;

}

void Persoana :: Student :: Sofer :: setMasina(string masina) {

    this -> masina = masina;

}

string Persoana :: Student :: Sofer :: getMasina() {

    if (masina == "") {

        return "N/A";

    }

    return this -> masina;

}
