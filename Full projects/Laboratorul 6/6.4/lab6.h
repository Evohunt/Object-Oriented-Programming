using namespace std;

#define CONSTR
#define OVERLOAD
#define NORMAL

struct NumarComplex {

    double parteReala;
    double parteImaginara;

    NumarComplex();

    NumarComplex(double x, double y) :
        parteReala(x),
        parteImaginara(y)
    {}


};

class Operatii {

    public:
        CONSTR Operatii(double firstDouble, double secondDouble) {}
        CONSTR Operatii(NumarComplex firstComplex, NumarComplex secondComplex) {}
        CONSTR Operatii() = default;

        OVERLOAD static double Suma(double firstDouble, double secondDouble);
        OVERLOAD static NumarComplex Suma(NumarComplex firstComplex, NumarComplex secondComplex);

        OVERLOAD static double Diferenta(double firstDouble, double secondDouble);
        OVERLOAD static NumarComplex Diferenta(NumarComplex firstComplex, NumarComplex secondComplex);

        OVERLOAD static double Produs(double firstDouble, double secondDouble);
        OVERLOAD static NumarComplex Produs(NumarComplex firstComplex, NumarComplex secondComplex);

        OVERLOAD static double Raport(double firstDouble, double secondDouble);
        OVERLOAD static NumarComplex Raport(NumarComplex firstComplex, NumarComplex secondComplex);

        NORMAL void afisareComplex(NumarComplex numarComplex);

};
