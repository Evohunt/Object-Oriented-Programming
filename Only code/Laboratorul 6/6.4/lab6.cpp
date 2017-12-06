#include <iostream>
#include <cmath>
#include "lab6.h"

using namespace std;

/// ---Operatii double---
double Operatii::Suma(double firstDouble, double secondDouble) {

    return firstDouble + secondDouble;

}

double Operatii::Diferenta(double firstDouble, double secondDouble) {

    return firstDouble - secondDouble;

}

double Operatii::Produs(double firstDouble, double secondDouble) {

    return firstDouble * secondDouble;

}

double Operatii::Raport(double firstDouble, double secondDouble) {

    return firstDouble / secondDouble;

}
/// ---End operatii double---



/// ---Operatii complex---
NumarComplex Operatii::Suma(NumarComplex firstComplex, NumarComplex secondComplex) {

    NumarComplex tempComplex(0, 0);

    tempComplex.parteReala = firstComplex.parteReala + secondComplex.parteReala;
    tempComplex.parteImaginara = firstComplex.parteImaginara + secondComplex.parteImaginara;

    return tempComplex;

}

NumarComplex Operatii::Diferenta(NumarComplex firstComplex, NumarComplex secondComplex) {

    NumarComplex tempComplex(0, 0);

    tempComplex.parteReala = firstComplex.parteReala - secondComplex.parteReala;
    tempComplex.parteImaginara = firstComplex.parteImaginara - secondComplex.parteImaginara;

    return tempComplex;

}

NumarComplex Operatii::Produs(NumarComplex firstComplex, NumarComplex secondComplex) {

    NumarComplex temp (0, 0);
    temp.parteReala = firstComplex.parteReala * secondComplex.parteReala -
                      firstComplex.parteImaginara * secondComplex.parteImaginara;

    temp.parteImaginara = firstComplex.parteImaginara * secondComplex.parteReala +
                          firstComplex.parteReala * secondComplex.parteImaginara;

    return temp;

}

NumarComplex Operatii::Raport(NumarComplex firstComplex, NumarComplex secondComplex) {

    NumarComplex temp (0, 0);

    temp.parteReala = (firstComplex.parteReala * secondComplex.parteReala +
                      firstComplex.parteImaginara * secondComplex.parteImaginara) /
                      (pow(secondComplex.parteReala, 2) + pow(secondComplex.parteImaginara, 2));

    temp.parteImaginara = (secondComplex.parteReala * firstComplex.parteImaginara -
                          firstComplex.parteReala * secondComplex.parteImaginara) /
                          (pow(secondComplex.parteReala, 2) + pow(secondComplex.parteImaginara, 2));

    return temp;

}

void Operatii::afisareComplex(NumarComplex numarComplex) {

    if (numarComplex.parteImaginara < 0) {

        cout << numarComplex.parteReala << " - " << abs(numarComplex.parteImaginara) << 'i' << '\n';

    }
    else if (numarComplex.parteImaginara > 0) {

        cout << numarComplex.parteReala << " + " << numarComplex.parteImaginara << 'i' << '\n';

    }
    else {

        cout << numarComplex.parteReala << '\n';

    }

}
/// ---End operatii complex---

