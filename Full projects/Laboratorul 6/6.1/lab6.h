using namespace std;

#define OVERLOAD

struct NumarComplex {

    float parteReala;
    float parteImaginara;

    NumarComplex();

    NumarComplex(float x, float y) :
        parteReala(x),
        parteImaginara(y)
    {}


};

class Operatii {

    public:

        OVERLOAD float Modul(float numarReal);
        OVERLOAD float Modul(NumarComplex numarComplex);

        OVERLOAD void afisareNumar(NumarComplex numarComplex);
        OVERLOAD void afisareNumar(float numarReal);

};
