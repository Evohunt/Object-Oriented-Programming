using namespace std;

class NumarComplex {

    public:

        double parteReala;
        double parteImaginara;

    public:

        NumarComplex () = default;
        NumarComplex (double a, double b) :

            parteReala(a),
            parteImaginara(b)

        {}

        void print();

};

/// --- Random Number Generator --- ///
int generateRandom (int first, int second);

/// --- Random Output Generator --- ///
template <typename T>
inline T const& randomOutput() {

    return (T)rand() % 999999;

}

template <>
inline double const& randomOutput() {

    return (double)rand() / 999999 + generateRandom(-9999, 9999);

}

template <>
inline NumarComplex const& randomOutput() {

    NumarComplex Z (generateRandom(-99999, 99999), generateRandom(-99999, 99999));
    return Z;

}






