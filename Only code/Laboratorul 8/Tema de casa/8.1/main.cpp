/// T.8.1 Rescrieți Exemplu 8.1 pentru a calcula în plus și minimul dintre două numere complexe. Minimul
/// dintre două numere complexe îl considerăm in acest exemplu ca punctul care are reprezentarea în plan
/// mai apropiată de origine.

#include <iostream>
#include <cmath>
#include <stdlib.h>
#include "lab8.h"

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    system("color 03");

    NumarComplex z1 (12.435, 45.356);
    NumarComplex z2 (54.346, -21.816);

    NumarComplex result = GetMin<NumarComplex>(z1, z2);

    cout << "==========================\n";
    cout << "z1 = "; z1.print();
    cout << "z2 = "; z2.print();
    cout << '\n';
    if (result == z1) {

        cout << "min(z1, z2) = z1" << '\n';

    }
    else if (result == z2) {

        cout << "min(z1, z2) = z2" << '\n';

    }
    cout << "==========================\n";


    return 0;
}
