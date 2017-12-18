#include <iostream>
#include "lab7.h"

using namespace std;

Persoana :: Parinte :: Parinte(string prenume) {

    this -> prenume = prenume;

}

void Persoana :: Parinte :: setPrenume(string prenume) {

    this -> prenume = prenume;

}

string Persoana :: Parinte :: getPrenume() {

    return this -> prenume;

}
