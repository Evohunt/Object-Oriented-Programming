/// T.6.5. Proiectați și implementați o clasă asociată numerelor complexe. Supraăncărcați operatorii
/// aritmetici, ~ pentru modul și ^ pentru ridicare la putere.

#include <iostream>
#include <cmath>
#include <stdlib.h>
#include "lab6.h"

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    system("color 03");

    NumarComplex numarComplex (-22.573, 14.674);
    cout << "Numar complex: ";
    numarComplex.print();
    cout << "Modul: " << ~numarComplex << '\n';

    return 0;
}
