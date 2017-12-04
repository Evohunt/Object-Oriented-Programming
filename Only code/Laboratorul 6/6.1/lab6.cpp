#include <iostream>
#include <cmath>
#include "lab6.h"

using namespace std;

Operatii::Operatii(NumarComplex numarComplex) {

    this -> numarComplex.parteReala = numarComplex.parteReala;
    this -> numarComplex.parteImaginara = numarComplex.parteImaginara;

}

Operatii::Operatii(double numarReal) {

    this -> numarReal = numarReal;

}

double Operatii::Modul(NumarComplex tempVar) {

    return sqrt( pow(this -> numarComplex.parteReala, 2) + pow(this -> numarComplex.parteImaginara, 2) );

}

double Operatii::Modul(double tempVar) {

    return abs(this -> numarReal);

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



