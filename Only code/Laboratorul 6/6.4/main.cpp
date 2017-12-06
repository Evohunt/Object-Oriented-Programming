/// T.6.4. Rescrieți clasa Operații de la T.6.4. care să folosească metode statice, supraîncărcate, cu doi
/// parametrii (două numere double respectiv două NumarComplex) și să calculeze suma, diferența,
/// produsul și împărțirea parametrilor.

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

    double firstDouble = -234.4364;
    double secondDouble = 65.2346;

    NumarComplex firstComplex (23.67, -12.45);
    NumarComplex secondComplex (41.57, 64.12);
    NumarComplex temp (0, 0);

    cout << "====================================\n";
    cout << "Numere reale: "; cout << firstDouble << "   " << secondDouble << '\n';
    cout << '\n';
    cout << "Suma: " << op -> Suma(firstDouble, secondDouble) << '\n';
    cout << "Diferenta: " << op -> Diferenta(firstDouble, secondDouble) << '\n';
    cout << "Produs: " << op -> Produs(firstDouble, secondDouble) << '\n';
    cout << "Raport: " << op -> Raport(firstDouble, secondDouble) << '\n';
    cout << "====================================\n\n";

    cout << "====================================\n";
    cout << "Primul complex: ";
    op -> afisareComplex(firstComplex);
    cout << "Al doilea complex: ";
    op -> afisareComplex(secondComplex);
    cout << '\n';
    cout << "Suma: ";
    temp.parteReala = op -> Suma(firstComplex, secondComplex).parteReala;
    temp.parteImaginara = op -> Suma(firstComplex, secondComplex).parteImaginara;
    op -> afisareComplex(temp);
    cout << "Diferenta: ";
    temp.parteReala = op -> Diferenta(firstComplex, secondComplex).parteReala;
    temp.parteImaginara = op -> Diferenta(firstComplex, secondComplex).parteImaginara;
    op -> afisareComplex(temp);
    cout << "Produs: ";
    temp.parteReala = op -> Produs(firstComplex, secondComplex).parteReala;
    temp.parteImaginara = op -> Produs(firstComplex, secondComplex).parteImaginara;
    op -> afisareComplex(temp);
    cout << "Raport: ";
    temp.parteReala = op -> Raport(firstComplex, secondComplex).parteReala;
    temp.parteImaginara = op -> Raport(firstComplex, secondComplex).parteImaginara;
    op -> afisareComplex(temp);
    cout << "====================================\n";

    return 0;
}
