/// T.6.2. Rescrieti clasa Operatii de la T.6.1. astfel incit sa existe o metoda statica, supraincarcată pentru
/// calculul modulului unui double respectiv al unui număr complex. Analog, o metodă statică pentru
/// afișarea numărului real sau complex.

#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <iomanip>
#include "lab6.h"

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    system("color 03");

    Operatii *op = new Operatii;
    double numarReal = -335.3647;
    NumarComplex numarComplex (2353.5768, -4657.346547);

    cout << "Numar real: ";
    op -> afisareNumar(numarReal);

    cout << "Modul numar real, precizie 3: ";
    cout << fixed << setprecision(3) << op -> Modul(numarReal) << '\n';


    cout << '\n';


    cout << "Numar complex: ";
    op -> afisareNumar(numarComplex);

    cout << "Modul numar complex, precizie 3: ";
    cout << fixed << setprecision(3) << op -> Modul(numarComplex);


    cout << '\n';


    return 0;
}




