/// T.6.2. Rescrieti clasa Operatii de la T.6.1. astfel incit sa existe o metoda statica, supraincarcată pentru
/// calculul modulului unui double respectiv al unui număr complex. Analog, o metodă statică pentru
/// afișarea numărului real sau complex.

#include <iostream>
#include <cmath>
#include <iomanip>
#include "lab6.h"

using namespace std;

double Operatii::numarReal = -23526.238768;
NumarComplex Operatii::numarComplex (-236.467698, -224.263423);

double tempDouble;
NumarComplex tempComplex(0, 0);

void fancy_print(); /// Refactored version of program printing

int main()
{
    fancy_print();
    return 0;
}




void fancy_print() {

    cout << "Numar real: ";
    cout << fixed << setprecision(6) << Operatii::getReal() << '\n';
    cout << "Modul numar real, precizie 3: ";
    cout << fixed << setprecision(3) << Operatii::Modul(tempDouble) << '\n';

    cout << '\n';
    cout << "Numar complex: ";
    cout << fixed << setprecision(6) << Operatii::getComplex().parteReala;
    if (Operatii::getComplex().parteImaginara > 0) {

        cout << " + " << fixed << setprecision(6) << Operatii::getComplex().parteImaginara << 'i' << '\n';

    }
    else if (Operatii::getComplex().parteImaginara < 0) {

        cout << " - " << fixed << setprecision(6) << abs(Operatii::getComplex().parteImaginara) << 'i' << '\n';

    }
    cout << "Modul numar complex, precizie 3: ";
    cout << fixed << setprecision(3) << Operatii::Modul(tempComplex) << '\n';

}



