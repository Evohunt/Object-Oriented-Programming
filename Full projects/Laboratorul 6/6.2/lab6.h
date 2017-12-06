using namespace std;

#define OVERLOAD

struct NumarComplex {

    double parteReala;
    double parteImaginara;

    NumarComplex();

    NumarComplex (double x, double y) :
        parteReala(x),
        parteImaginara(y)
    {}


};

class Operatii {

    public:

        OVERLOAD static double Modul(double numarReal);
        OVERLOAD static double Modul(NumarComplex numarComplex);

        OVERLOAD void afisareNumar(double numarReal);
        OVERLOAD void afisareNumar(NumarComplex numarComplex);

};
