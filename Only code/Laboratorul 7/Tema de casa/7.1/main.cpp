#include <iostream>
#include <stdlib.h>
#include "lab7.h"

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    system("color 03");

    Persoana *persoana = new Persoana;
    persoana -> setNume("Torino");
    persoana -> parinte -> setPrenume("Doru");
    persoana -> setVarsta(31);

    persoana -> parinte -> sofer -> setMasina("Mercedes-Benz Atros");
    persoana -> parinte -> sofer -> setTipPermis("C, D, E");

    persoana -> parinte -> sofer -> angajat -> setSalariu(1750);
    persoana -> parinte -> sofer -> angajat -> setMeserie("Tirist");

    persoana -> parinte -> copil1 -> setPrenume("Fane");
    persoana -> parinte -> copil1 -> setStatus("Student");
    persoana -> parinte -> copil2 -> setPrenume("Ghita");
    persoana -> parinte -> copil2 -> setStatus("Elev");
    persoana -> parinte -> copil3 -> setPrenume("Florin");
    persoana -> parinte -> copil3 -> setStatus("Somer");


    cout << '\n';
    cout << "Nume complet: " << persoana -> getNume() << ' ' << persoana -> parinte -> getPrenume() << '\n';
    cout << "Varsta: " << persoana -> getVarsta() << '\n';

    cout << '\n';

    cout << "Masina: " << persoana -> parinte -> sofer -> getMasina() << '\n';
    cout << "Tip permis: " << persoana -> parinte -> sofer -> getTipPermis() << '\n';

    cout << '\n';

    cout << "Salariu: " << persoana -> parinte -> sofer -> angajat -> getSalariu() << " RON" << '\n';
    cout << "Meserie: " << persoana -> parinte -> sofer -> angajat -> getMeserie() << '\n';

    cout << '\n';

    cout << "Copii:" << '\n';
    cout << "   1. " << persoana -> getNume() << ' ' << persoana -> parinte -> copil1 -> getPrenume() << " - ";
    cout << persoana -> parinte -> copil1 -> getStatus() << '\n';
    cout << "   2. " << persoana -> getNume() << ' ' << persoana -> parinte -> copil2 -> getPrenume() << " - ";
    cout << persoana -> parinte -> copil2 -> getStatus() << '\n';
    cout << "   3. " << persoana -> getNume() << ' ' << persoana -> parinte -> copil3 -> getPrenume() << " - ";
    cout << persoana -> parinte -> copil3 -> getStatus() << '\n';

    return 0;
}

