/// T.6.1 Scrieti o clasa Operatii care va avea 2 constructori cu parametrii un double respectiv o clasa
/// NumarComplex. Definiti clasa NumarComplex. Clasa Operatii implementeaza o metodă pentru calculul
/// modulului numartului transmis ca parametru, double sau numar complex. Clasa Operatii va avea o
/// metoda afisare, supraîncărcată, care afișează un număr real sau complex.

#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <iomanip>
#include "lab6.h"

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    system("color 03");

    Operatii *op = new Operatii;

    float numarReal = -346.46545;
    NumarComplex numarComplex (-133.3646, 4757.354346);

    cout << "Numar real: ";
    cout << fixed << setprecision(5);
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
