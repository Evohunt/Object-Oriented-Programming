#include <iostream>
#include <cmath>
#include "lab8.h"

using namespace std;

/// --- Instances of NumarComplex --- ///
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
/// --- END NumarComplex --- ///

double complexDistance(const NumarComplex & z) {

    return sqrt(pow(z.parteReala, 2) + pow(z.parteImaginara, 2));

}

bool operator < (const NumarComplex & z1, const NumarComplex & z2) {

    return complexDistance(z1) < complexDistance(z2);

}

bool operator == (const NumarComplex & z1, const NumarComplex & z2) {

    return (z1.parteReala == z2.parteReala && z1.parteImaginara == z2.parteImaginara);

}


