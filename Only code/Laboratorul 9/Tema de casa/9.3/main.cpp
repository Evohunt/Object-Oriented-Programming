/// T.9.3. Scrieți două clase abstracte, Plant și FoodSource. În fiecare, scrieți cîte o metodă pur virtuală.
/// Extindeți Plant la Carot și FoodSource la Chicken. Creați clasa Apple care extinde Plant și FoodSource.
/// Implementați și folosiți metoda/metodele pur virtuală/virtuale din clasa de bază. Care sunt problemele
/// apărute ?

#include <iostream>
#include <thread>
#include <chrono>
#include <conio.h>
#include <stdlib.h>
#include "lab9.h"

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    system("color 03");
    system("title Andrew's Store");

    cout << "=================== *Plants* ===================\n" << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
    Carrot *morcov = new Carrot("Morcov", 5);
    cout << "Nume: " << morcov -> getName() << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
    cout << "Numar vitamine: " << morcov -> getVitaminsNumber() << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
    cout << "================================================\n" << flush;
    this_thread::sleep_for(chrono::microseconds(70000));

    cout << "\n          Press any key for next page          " << flush;

    getch();
    system("cls");

    cout << "================= *Food Source* ================\n" << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
    Chicken *gaina = new Chicken(3, 9);
    cout << "Nume: Gaina" << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
    cout << "Calitate: " << gaina -> getQuality() << " / 10" << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
    cout << "================================================\n" << flush;
    this_thread::sleep_for(chrono::microseconds(70000));

    cout << "\n          Press any key for next page          " << flush;

    getch();
    system("cls");

    cout << "============ *Food Source + Plants* ============\n" << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
    Apple *mar = new Apple("Mar", "Rosu", 8);
    cout << "Nume: " << mar -> getName() << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
    cout << "Culoare: " << mar -> getColor() << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
    cout << "Calitate: " << mar -> getQuality() << " / 10" << '\n' << flush;
    this_thread::sleep_for(chrono::microseconds(70000));
    cout << "================================================\n" << flush;
    this_thread::sleep_for(chrono::microseconds(70000));

    return 0;
}
