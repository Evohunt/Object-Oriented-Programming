using namespace std;

#define CONSTR
#define NORMAL

class NumarComplex {

    public:

        double parteReala;
        double parteImaginara;

    public:

        CONSTR NumarComplex () = default;
        CONSTR NumarComplex (double a, double b) :

            parteReala(a),
            parteImaginara(b)

        {}

        NORMAL void print();

};

double complexDistance(const NumarComplex & z);

bool operator < (const NumarComplex & z1, const NumarComplex & z2);

bool operator == (const NumarComplex & z1, const NumarComplex & z2);

template <class U>
U GetMin (U a, U b) {

    return (a < b ? a : b);

}

template <class U>
U GetMax (U a, U b) {

    return (a > b ? a : b);

}





