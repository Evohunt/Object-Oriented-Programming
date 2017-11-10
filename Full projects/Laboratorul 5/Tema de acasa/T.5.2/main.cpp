/// T.5.2 Scrieti o clasa Desert care gestioneaza un produs alimentar de acest tip. Extindeti clasa la Prajitura
/// si TortAniversare. Definiti 1-3 membrii variabile specifici fiecarui tip de clasa. Definiti o metoda membru
/// in Desert. Suprascrieti metoda respectiva in cele doua sub-clase, Prajitura si TortAniversare si folositi in
/// ea membrii variabile din Prajitura si sub-clasa respectiva (Prajitura si TortAniversare).

# include <iostream>
# include "lab5.h"

using namespace std;

int main()
{

    Desert *unknown = new Desert(0, "Unknown");
    cout << "Desert name: " << unknown -> get_name() << '\n';
    cout << "Desert price: " << unknown -> get_price() << "Lei \n";
    unknown -> print_weigth();

    cout << '\n';

    Prajitura *amandina = new Prajitura(10, "Amandina", 200);
    cout << "Desert name: " << amandina -> get_name() << '\n';
    cout << "Desert price: " << amandina -> get_price() << "Lei \n";
    amandina -> print_weigth();

    cout << '\n';

    TortAniversare *tort_ciocolata = new TortAniversare(60, "Tort cu ciocolata", 2500);
    cout << "Desert name: " << tort_ciocolata -> get_name() << '\n';
    cout << "Desert price: " << tort_ciocolata -> get_price() << "Lei \n";
    tort_ciocolata-> print_weigth();

    return 0;
}
