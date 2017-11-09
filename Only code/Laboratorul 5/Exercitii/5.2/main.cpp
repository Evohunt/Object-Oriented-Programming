/// E5.2 Refactorizati Exemplul 5.1 si exercitiul anterior astfel incit sa folositi fisiere header.

# include <iostream>
# include "lab5.h"

using namespace std;

int main()
{
    Form *f = new Form();
    f -> setName("forma1");
    cout << "Forma: " << f -> getName() << '\n';

    Rectangle *r = new Rectangle();
    r -> setWidth(23);
    r -> setName("rectangle 1");

    /// r -> setColor("Red"); Nu este disponibil!

    cout << "Rectangle name: " << r -> getName() << "\nWidth: " << r -> getWidth() << '\n';

    return 0;
}
