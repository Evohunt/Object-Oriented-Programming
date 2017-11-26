/// T.6.1 Scrieti o clasa Operatii care va avea 2 constructori cu parametrii un double respectiv o clasa
/// NumarComplex. Definiti clasa NumarComplex. Clasa Operatii implementeaza o metodă pentru calculul
/// modulului numartului transmis ca parametru, doule sau numar complex. Clasa Operatii va avea o
/// metoda afisare, supraîncărcată, care afișează un număr real sau complex.

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct NumarComplex {

    double parteReala;
    double parteImaginara;

};

class Operatii {

    NumarComplex numarComplex;
    double numarReal;

    public:
        Operatii(NumarComplex numarComplex) {

            this -> numarComplex.parteReala = numarComplex.parteReala;
            this -> numarComplex.parteImaginara = numarComplex.parteImaginara;

        }
        Operatii(double numarReal) {

            this -> numarReal = numarReal;

        }
        double calculModulComplex() {

            return sqrt( pow(this -> numarComplex.parteReala, 2) + pow(this -> numarComplex.parteImaginara, 2) );

        }
        double calculModulReal() {

            return abs(this -> numarReal);

        }
        void afisareNumar(NumarComplex numarComplex) {

            if (numarComplex.parteImaginara < 0) {

                cout << numarComplex.parteReala << " - " << abs(numarComplex.parteImaginara) << 'i' << '\n';

            }
            else if (numarComplex.parteImaginara > 0) {

                cout << numarComplex.parteReala << " + " << numarComplex.parteImaginara << 'i' << '\n';

            }
            else {

                cout << numarComplex.parteReala << '\n';

            }

        }
        void afisareNumar(double numarReal) {

            cout << numarReal << '\n';

        }


};

int main()
{

    NumarComplex z;
    z.parteReala = 2.34757;
    z.parteImaginara = -4.567;
    Operatii *op = new Operatii(z);

    cout << "Numar complex: ";
    op -> afisareNumar(z);
    cout << "Modul numar complex: " << fixed << setprecision(3) << op -> calculModulComplex() << '\n';


    cout << '\n';


    double x = -4545.23543;
    *op = Operatii(x);

    cout << "Numar real: ";
    op -> afisareNumar(x);
    cout << "Modul numar real: " << op -> calculModulReal() << '\n';

    return 0;
}
