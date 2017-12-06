using namespace std;

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

    double firstDouble;
    double secondDouble;

    NumarComplex firstComplex;
    NumarComplex secondComplex;

    public:
        Operatii(double firstDouble, double secondDouble) {

            this -> firstDouble = firstDouble;
            this -> secondDouble = secondDouble;

        }
        Operatii(NumarComplex firstComplex, NumarComplex secondComplex) {

            this -> firstComplex.parteReala = firstComplex.parteReala;
            this -> firstComplex.parteImaginara = firstComplex.parteImaginara;

            this -> secondComplex.parteReala = secondComplex.parteReala;
            this -> secondComplex.parteImaginara = secondComplex.parteImaginara;

        }

};
