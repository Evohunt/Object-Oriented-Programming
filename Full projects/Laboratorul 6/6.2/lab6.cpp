#include <iostream>
#include <cmath>
#include "lab6.h"

using namespace std;

double Operatii::Modul(double numarReal) {

    return abs(numarReal);

}

double Operatii::Modul(NumarComplex numarComplex) {

    return sqrt( pow(numarComplex.parteReala, 2) + pow(numarComplex.parteImaginara, 2) );

}

void Operatii::afisareNumar(NumarComplex numarComplex) {

    if (numarComplex.parteImaginara < 0) {

        cout << numarComplex.parteReala << " - " << abs(numarComplex.parteImaginara) << 'i' << '\n';

    }
    else if (numarComplex.parteImaginara > 0) {

        cout << numarComplex.parteReala << " + " << numarComplex.parteImaginara << 'i' << '\n';

    }
    else {

        cout << numarComplex.parteReala << '\n';

    }

}

void Operatii::afisareNumar(double numarReal) {

    cout << numarReal << '\n';

}





