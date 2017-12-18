#include <iostream>
#include <cmath>
#include "lab6.h"

using namespace std;

double NumarComplex::operator ~ () {

    return sqrt( pow(parteReala, 2) + pow(parteImaginara, 2) );

}

NumarComplex NumarComplex::operator ^ (int power) {

    if (power == 0) {

        return NumarComplex(1, 0);

    }

    double tempReal = this -> parteReala;
    double tempImaginar = this -> parteImaginara;

    while (--power) {

        tempReal = tempReal * this -> parteReala - this -> parteImaginara * tempImaginar;
        tempImaginar = this -> parteReala * tempImaginar + this -> parteImaginara * tempReal;

    }

    return NumarComplex(tempReal, tempImaginar);

}

void NumarComplex::print() {

    if (parteImaginara < 0) {

        cout << parteReala << " - " << abs(parteImaginara) << 'i' << '\n';

    }
    else if (parteImaginara > 0) {

        cout << parteReala << " + " << parteImaginara << 'i' << '\n';

    }
    else {

        cout << parteReala << '\n';

    }

}
