using namespace std;

#define CONSTR
#define OVERLOAD
#define NORMAL

struct NumarComplex {

    double parteReala;
    double parteImaginara;

    NumarComplex (double x, double y) :
        parteReala(x),
        parteImaginara(y)
    {}


};

class Operatii {

    static double numarReal;
    static NumarComplex numarComplex;

    public:
        CONSTR Operatii();

        OVERLOAD static double Modul(double tempVar);
        OVERLOAD static double Modul(NumarComplex tempVar);

        NORMAL static double getReal();
        NORMAL static NumarComplex getComplex();

};
