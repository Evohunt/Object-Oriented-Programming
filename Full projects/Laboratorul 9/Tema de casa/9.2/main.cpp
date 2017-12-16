/// T.9.2. Scrieți o clasă abstractă Weapon, cu două metode pur virtuale și un destructor virtual. Extindeți
/// clasa la Sling, AtomicBomb și Gun (clasă abstractă). Extindeți Gun la Rifle. Extindeți Rifle la MachineGun.
/// Folosiți cele două metode pur virtuale, în toate clasele. Apelați și una dintre metodele virtuale din
/// weapon, in clasele derivate. Pot apărea probleme ?

#include <iostream>
#include <stdlib.h>
#include "lab9.h"

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    system("color 03");
    system("title Andrew's Ammo Nation");

    cout << "=================== *Slings* ===================\n";
    Sling *starter_slingshot = new Sling(95, 1, 0, "Starter Slingshot");
    starter_slingshot -> printWeapon();
    cout << "================================================\n";

    cout << "\n\n";

    cout << "================ *Atomic Bombs* ================\n";
    AtomicBomb *tsar_bomba = new AtomicBomb(100, 10, 1, "Tsar Bomba");
    tsar_bomba -> printWeapon();
    cout << "================================================\n";

    cout << "\n\n";

    cout << "==================== *Guns* ====================\n";
    Gun *glock_19 = new Gun(15, 4, 0, "Glock-19");
    glock_19 -> printWeapon();

    cout << '\n';

    Rifle *ak_47 = new Rifle(1, 30, 6, 0, "Ak-47");
    ak_47 -> printWeapon();

    cout << '\n';
    MachineGun *m249 = new MachineGun(75, 3, 200, 7, 1, "M249");
    m249 -> printWeapon();
    cout << "================================================\n";

    return 0;
}
