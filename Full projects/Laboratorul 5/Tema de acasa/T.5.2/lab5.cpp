# include <iostream>
# include "lab5.h"

using namespace std;

/// Functions of Desert
Desert::Desert(int pret, string nume) {

    this -> pret = pret;
    this -> nume = nume;

}

void Desert::set_name(string nume) {

    this -> nume = nume;

}

string Desert::get_name() {

    return this -> nume;

}

int Desert::get_price() {

    return this -> pret;

}

void Desert::set_price(int pret) {

    this -> pret = pret;

}

void Desert::print_weigth() {

    cout << "Not available." << '\n';

}


/// Functions of Prajitura
void Prajitura::set_weigth(int greutate) {

    this -> greutate = greutate;

}

int Prajitura::get_weigth() {

    return this -> greutate;

}

void Prajitura::print_weigth() {

    cout << "Weigth of " << get_name() << ": " << get_weigth() << "g \n";

}


/// Functions of TortAniversare
void TortAniversare::set_weigth(int greutate) {

    this -> greutate = greutate;

}

int TortAniversare::get_weigth() {

    return this -> greutate;

}

void TortAniversare::print_weigth() {

    cout << "Weigth of " << get_name() << ": " << get_weigth() << "g \n";

}
