/// T.8.3. Scrieți o metodă care returnează în mod aleator un int, double, long sau o clasă număr complex.

#include <iostream>
#include <ctime>
#include <random>
#include <stdlib.h>
#include "lab8.h"

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    srand(time(NULL));
    system("color 03");
    system("title Random Type Generator by Andrei Dana");

    int randomChoice = generateRandom(1, 4);

    switch (randomChoice) {

        case 1:
            cout << "Random int: ";
            cout << randomOutput<int>() << '\n';
            break;

        case 2:
            cout << "Random long: ";
            cout << randomOutput<long>() << '\n';
            break;

        case 3:
            cout << "Random double: ";
            cout << randomOutput<double>() << '\n';
            break;

        case 4:
            cout << "Random complex: ";
            NumarComplex Z = randomOutput<NumarComplex>();
            Z.print();
            break;

    }


    return 0;
}
