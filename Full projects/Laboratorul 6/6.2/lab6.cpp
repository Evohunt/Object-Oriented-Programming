#include <iostream>
#include <cmath>
#include "lab6.h"

using namespace std;

double Operatii::Modul(double tempVar) {

    return abs(numarReal);

}

double Operatii::Modul(NumarComplex tempVar) {

    return sqrt( pow(numarComplex.parteReala, 2) + pow(numarComplex.parteImaginara, 2) );

}

double Operatii::getReal() {

    return numarReal;

}

NumarComplex Operatii::getComplex() {

    return numarComplex;

}




