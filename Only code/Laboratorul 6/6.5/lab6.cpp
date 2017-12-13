#include <iostream>
#include <cmath>
#include "lab6.h"

using namespace std;

double NumarComplex::operator ~ () {

    return sqrt( pow(parteReala, 2) + pow(parteImaginara, 2) );

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
