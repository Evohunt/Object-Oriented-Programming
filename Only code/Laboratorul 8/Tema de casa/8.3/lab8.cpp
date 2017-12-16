#include <iostream>
#include <ctime>
#include <random>
#include <stdlib.h>
#include "lab8.h"

using namespace std;

/// --- NumarComplex --- ///
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


/// --- Random Number Generator --- ///
int generateRandom (int first, int second) {

    return rand() % second + first;

}
/// --- END Random Number Generator --- ///
