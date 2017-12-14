#include <iostream>
#include <stdlib.h>
#include <string>
#include <list>
#include "lab8.h"

using namespace std;

/// --- Persoana --- ///
Persoana::Persoana(string nume_prenume, int varsta) {

    this -> nume_prenume = nume_prenume;
    this -> varsta = varsta;

}

string Persoana::getNumePrenume() {

    return this -> nume_prenume;

}

int Persoana::getVarsta() {

    return this -> varsta;

}

string Persoana::setNumePrenume(string nume_prenume) {

    this -> nume_prenume = nume_prenume;

}

int Persoana::setVarsta(int varsta) {

    this -> varsta = varsta;

}
/// --- END Persoana --- ///


/// --- Parinte --- ///
Parinte::Parinte(string nume_prenume, int varsta, int numarCopii) {

    this -> nume_prenume = nume_prenume;
    this -> varsta = varsta;
    this -> numarCopii = numarCopii;

}

string Parinte::getNumePrenume() {

    return this -> nume_prenume;

}

int Parinte::getVarsta() {

    return this -> varsta;

}

int Parinte::getNumarCopii() {

    return this -> numarCopii;

}

string Parinte::setNumePrenume(string nume_prenume) {

    this -> nume_prenume = nume_prenume;

}

int Parinte::setVarsta(int varsta) {

    this -> varsta = varsta;

}

int Parinte::setNumarCopii(int numarCopii) {

    this -> numarCopii = numarCopii;

}
/// --- END Parinte --- ///


/// --- Angajat --- ///
Angajat::Angajat(string nume_prenume, int varsta, string meserie) {

    this -> nume_prenume = nume_prenume;
    this -> varsta = varsta;
    this -> meserie = meserie;

}

string Angajat::getNumePrenume() {

    return this -> nume_prenume;

}

int Angajat::getVarsta() {

    return this -> varsta;

}

string Angajat::getMeserie() {

    return this -> meserie;

}

string Angajat::setNumePrenume(string nume_prenume) {

    this -> nume_prenume = nume_prenume;

}

int Angajat::setVarsta(int varsta) {

    this -> varsta = varsta;

}

string Angajat::setMeserie(string meserie) {

    this -> meserie = meserie;

}
/// --- END Angajat --- ///


/// --- Print functions --- ///
void printClass (Persoana temp) {

    cout << "Nume complet: " << temp.getNumePrenume() << '\n';
    cout << "Varsta: " << temp.getVarsta() << '\n';

}

void printClass (Parinte temp) {

    cout << "Nume complet: " << temp.getNumePrenume() << '\n';
    cout << "Varsta: " << temp.getVarsta() << '\n';
    cout << "Numar copii: " << temp.getNumarCopii() << '\n';

}

void printClass (Angajat temp) {

    cout << "Nume complet: " << temp.getNumePrenume() << '\n';
    cout << "Varsta: " << temp.getVarsta() << '\n';
    cout << "Meserie: " << temp.getMeserie() << '\n';

}
/// --- END print functions --- ///
