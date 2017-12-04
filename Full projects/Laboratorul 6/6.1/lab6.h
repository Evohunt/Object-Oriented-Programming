using namespace std;

#define CONSTR
#define OVERLOAD

struct NumarComplex {

    double parteReala;
    double parteImaginara;

};

class Operatii {

    NumarComplex numarComplex;
    double numarReal;

    public:
        CONSTR Operatii(NumarComplex numarComplex);
        CONSTR Operatii(double numarReal);

        OVERLOAD double Modul(double tempVar);
        OVERLOAD double Modul(NumarComplex tempVar);

        OVERLOAD void afisareNumar(NumarComplex numarComplex);
        OVERLOAD void afisareNumar(double numarReal);

};
