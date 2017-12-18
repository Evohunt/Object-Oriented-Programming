#include <iostream>
#include "lab7.h"

using namespace std;

Persoana :: Parinte :: Copil :: Copil(string prenume, string status) {

    this -> prenume = prenume;
    this -> status = status;

}

void Persoana :: Parinte :: Copil :: setPrenume(string prenume) {

    this -> prenume = prenume;

}

string Persoana :: Parinte :: Copil :: getPrenume() {

    return this -> prenume;

}

void Persoana :: Parinte :: Copil :: setStatus(string status) {

    this -> status = status;

}

string Persoana :: Parinte :: Copil :: getStatus() {

    return this -> status;

}
