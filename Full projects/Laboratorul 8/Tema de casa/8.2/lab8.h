#include <list>

#define CONSTR
#define NORMAL

using namespace std;

template <class U>
class CreateList {

    public:
        list <U> database;

};




class Persoana {

    string nume_prenume;
    int varsta;

    public:
        CONSTR Persoana() = default;
        CONSTR Persoana(string nume_prenume, int varsta);

        NORMAL string getNumePrenume();
        NORMAL int getVarsta();

        NORMAL string setNumePrenume(string nume_prenume);
        NORMAL int setVarsta(int varsta);

};

class Parinte {

    string nume_prenume;
    int varsta;
    int numarCopii;

    public:
        CONSTR Parinte() = default;
        CONSTR Parinte(string nume_prenume, int varsta, int numarCopii);

        NORMAL string getNumePrenume();
        NORMAL int getVarsta();
        NORMAL int getNumarCopii();

        NORMAL string setNumePrenume(string nume_prenume);
        NORMAL int setVarsta(int varsta);
        NORMAL int setNumarCopii(int numarCopii);

};

class Angajat {

    string nume_prenume;
    int varsta;
    string meserie;

    public:
        CONSTR Angajat() = default;
        CONSTR Angajat(string nume_prenume, int varsta, string meserie);

        NORMAL string getNumePrenume();
        NORMAL int getVarsta();
        NORMAL string getMeserie();

        NORMAL string setNumePrenume(string nume_prenume);
        NORMAL int setVarsta(int varsta);
        NORMAL string setMeserie(string meserie);

};

void printClass (Persoana temp);
void printClass (Parinte temp);
void printClass (Angajat temp);


