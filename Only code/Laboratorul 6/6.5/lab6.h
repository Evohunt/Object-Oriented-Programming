using namespace std;

#define CONSTR
#define OP_OVERLOAD
#define NORMAL

class NumarComplex {

    double parteReala;
    double parteImaginara;

    public:

        CONSTR NumarComplex() = default;
        CONSTR NumarComplex(double x, double y) :
            parteReala(x),
            parteImaginara(y)
        {}

        OP_OVERLOAD double operator ~ ();
        OP_OVERLOAD NumarComplex operator ^ (int power);

        NORMAL void print();

};
