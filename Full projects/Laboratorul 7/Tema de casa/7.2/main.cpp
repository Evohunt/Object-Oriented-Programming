/// T.7.2 Proiectați o structură pentru gestionarea unei liste de studenți utilizănd și clasa Persoană și Sofer.
/// Un student este o persoana și poate fi și sofer. Folosiți clase prietene și imbricate.

#include <iostream>
#include <thread>
#include <chrono>
#include <conio.h>
#include <stdlib.h>
#include "lab7.h"
#include <vector>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    system("color 03");

    Persoana *persoana1 = new Persoana("Georgescu Ionut", 19);
    persoana1 -> student -> setMedie(6.78);

    Persoana *persoana2 = new Persoana("Ionescu Doru", 24);
    persoana2 -> student -> setMedie(5.39);
    persoana2 -> student -> sofer -> setMasina("Dacia Logan");

    Persoana *persoana3 = new Persoana("Andronescu Marian", 21);
    persoana3 -> student -> setMedie(8.89);
    persoana3 -> student -> sofer -> setMasina("Audi A4");

    Persoana *persoana4 = new Persoana("Manescu Cornel", 22);
    persoana4 -> student -> setMedie(10.0);

    vector<Persoana> GrupaA;
    vector<Persoana> GrupaB;

    GrupaA.push_back(*persoana1);
    GrupaA.push_back(*persoana2);

    GrupaB.push_back(*persoana3);
    GrupaB.push_back(*persoana4);


    cout << "Grupa A:" << "\n\n" << flush;
    this_thread::sleep_for(chrono::microseconds(70000));

    for(auto it : GrupaA) {

        cout << "   Nume: " << it.getNume() << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
        cout << "   Varsta: " << it.getVarsta() << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
        cout << "   Medie: " << it.student -> getMedie() << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
        cout << "   Masina: " << it.student -> sofer -> getMasina() << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
        cout << "\n\n" << flush;
    this_thread::sleep_for(chrono::microseconds(70000));

    }

    cout << "\n          Press any key for next page          " << flush;
    getch();
    system("cls");

    cout << "Grupa B:" << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));

    for(auto it : GrupaB) {

        cout << "   Nume: " << it.getNume() << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
        cout << "   Varsta: " << it.getVarsta() << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
        cout << "   Medie: " << it.student -> getMedie() << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
        cout << "   Masina: " << it.student -> sofer -> getMasina() << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
        cout << "\n\n";

    }

    Persoana *copyStudent = new Persoana;
    *copyStudent = *GrupaA.begin();

    cout << "\n          Press any key for next page          " << flush;
    getch();
    system("cls");

    cout << "Grupa A (removed Georgescu Ionut):" << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
    GrupaA.erase(GrupaA.begin());

    for(auto it : GrupaA) {

        cout << "   Nume: " << it.getNume() << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
        cout << "   Varsta: " << it.getVarsta() << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
        cout << "   Medie: " << it.student -> getMedie() << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
        cout << "   Masina: " << it.student -> sofer -> getMasina() << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
        cout << "\n\n" << flush;
    this_thread::sleep_for(chrono::microseconds(70000));

    }

    cout << "\n          Press any key for next page          " << flush;
    getch();
    system("cls");

    vector<Persoana> GrupaC(GrupaB);
    cout << "Grupa C (Former B):" << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));

    for(auto it : GrupaC) {

        cout << "   Nume: " << it.getNume() << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
        cout << "   Varsta: " << it.getVarsta() << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
        cout << "   Medie: " << it.student -> getMedie() << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
        cout << "   Masina: " << it.student -> sofer -> getMasina() << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
        cout << "\n\n" << flush;
    this_thread::sleep_for(chrono::microseconds(70000));

    }

    cout << "\n          Press any key for next page          " << flush;
    getch();
    system("cls");

    cout << "Grupa C (added Georgescu Ionut):" << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
    GrupaC.push_back(*copyStudent);

    for(auto it : GrupaC) {

        cout << "   Nume: " << it.getNume() << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
        cout << "   Varsta: " << it.getVarsta() << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
        cout << "   Medie: " << it.student -> getMedie() << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
        cout << "   Masina: " << it.student -> sofer -> getMasina() << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
        cout << "\n\n" << flush;
    this_thread::sleep_for(chrono::microseconds(70000));

    }

    cout << '\n';

    return 0;
}
