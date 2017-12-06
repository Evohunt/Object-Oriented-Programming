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

        OVERLOAD double Suma(double firstDouble, double secondDouble);
        OVERLOAD NumarComplex Suma(NumarComplex firstComplex, NumarComplex secondComplex);

        OVERLOAD double Diferenta(double firstDouble, double secondDouble);
        OVERLOAD NumarComplex Diferenta(NumarComplex firstComplex, NumarComplex secondComplex);

        OVERLOAD double Produs(double firstDouble, double secondDouble);
        OVERLOAD NumarComplex Produs(NumarComplex firstComplex, NumarComplex secondComplex);

        OVERLOAD double Raport(double firstDouble, double secondDouble);
        OVERLOAD NumarComplex Raport(NumarComplex firstComplex, NumarComplex secondComplex);

        NORMAL void afisareComplex(NumarComplex numarComplex);

};
