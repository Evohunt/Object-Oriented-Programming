/// T.6.1 Scrieti o clasa Operatii care va avea 2 constructori cu parametrii un double respectiv o clasa
/// NumarComplex. Definiti clasa NumarComplex. Clasa Operatii implementeaza o metodă pentru calculul
/// modulului numartului transmis ca parametru, double sau numar complex. Clasa Operatii va avea o
/// metoda afisare, supraîncărcată, care afișează un număr real sau complex.

#include <iostream>
#include <cmath>
#include <iomanip>
#include "lab6.h"

using namespace std;

NumarComplex tempComplex;
double tempDouble;

int main()
{

    NumarComplex z;
    z.parteReala = 2.34757;
    z.parteImaginara = -4.567;
    Operatii *op = new Operatii(z);

    cout << "Numar complex: ";
    op -> afisareNumar(z);
    cout << "Modul numar complex: " << fixed << setprecision(3) << op -> Modul(tempComplex) << '\n';


    cout << '\n';


    double x = -4545.23543;
    *op = Operatii(x);

    cout << "Numar real: ";
    op -> afisareNumar(x);
    cout << "Modul numar real: " << op -> Modul(tempDouble) << '\n';

    return 0;
}
