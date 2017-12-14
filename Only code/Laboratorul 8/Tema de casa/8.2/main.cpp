/// T.8.2. Scrieți o clasa care creaza un array/lista de elemente de tip Persoana, Angajat sau Parinte.
/// Alegerea tipului se face la creare, pe baza unui meniu simplu. Afisati componentele array-ului/listei.

#include <iostream>
#include <stdlib.h>
#include <list>
#include <cstdio>
#include "lab8.h"

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    system("color 03");

    CreateList <Persoana> persoane;
    CreateList <Parinte> parinti;
    CreateList <Angajat> angajati;

    int optiune;
    int numar;

    cout << "======================\n";
    cout << "=   1. Persoana      =\n";
    cout << "=   2. Parinte       =\n";
    cout << "=   3. Angajat       =\n";
    cout << "======================\n";
    cout << "Optiune: "; cin >> optiune;

    switch (optiune) {

        case 1:
            system("cls");
            cout << "Numar persoane: "; cin >> numar;
            for (int i = 1; i <= numar; i++) {

                string nume;
                int varsta;

                cout << "Persoana " << i << '\n';
                cout << "   Nume complet: ";
                cin.get();
                getline(cin >> std::ws, nume);
                cout << "   Varsta: ";
                cin >> varsta;

                Persoana temp (nume, varsta);
                persoane.database.push_back(temp);

                cout << '\n';

            }
            system("cls");
            system("color 02");
            cout << "          Lista Persoane\n";
            cout << "==================================\n\n";
            for (auto it : persoane.database) {

                printClass(it);
                cout << '\n';

            }
            cout << "> Numar persoane: " << persoane.database.size() << '\n';
            cout << "==================================\n";
            break;

        case 2:
            system("cls");
            cout << "Numar parinti: "; cin >> numar;
            for (int i = 1; i <= numar; i++) {

                string nume;
                int varsta;
                int numarCopii;

                cout << "Persoana " << i << '\n';
                cout << "   Nume complet: ";
                cin.get();
                getline(cin >> std::ws, nume);
                cout << "   Varsta: ";
                cin >> varsta;
                cout << "   Numar copii: ";
                cin >> numarCopii;

                Parinte temp (nume, varsta, numarCopii);
                parinti.database.push_back(temp);

                cout << '\n';

            }
            system("cls");
            system("color 02");
            cout << "          Lista Parinti\n";
            cout << "==================================\n\n";
            for (auto it : parinti.database) {

                printClass(it);
                cout << '\n';

            }
            cout << "> Numar parinti: " << parinti.database.size() << '\n';
            cout << "==================================\n";
            break;

        case 3:
            system("cls");
            cout << "Numar angajati: "; cin >> numar;
            for (int i = 1; i <= numar; i++) {

                string nume;
                int varsta;
                string meserie;

                cout << "Persoana " << i << '\n';
                cout << "   Nume complet: ";
                cin.get();
                getline(cin >> std::ws, nume);
                cout << "   Varsta: ";
                cin >> varsta;
                cout << "   Meserie: ";
                cin.get();
                getline(cin >> std::ws, meserie);

                Angajat temp (nume, varsta, meserie);
                angajati.database.push_back(temp);

                cout << '\n';

            }
            system("cls");
            system("color 02");
            cout << "          Lista Angajati\n";
            cout << "==================================\n\n";
            for (auto it : angajati.database) {

                printClass(it);
                cout << '\n';

            }
            cout << "> Numar angajati: " << angajati.database.size() << '\n';
            cout << "==================================\n";
            break;

        default:
            system("cls");
            system("color 04");
            cout << "\nInvalid option.\n";

    }

    return 0;
}
