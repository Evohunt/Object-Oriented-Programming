/// 1.3 Adaugati o variabila membru name, in clasa Student si modificati aplicatia astfel incit name sa fie
/// initializat cu „Joe Doe”

# include <iostream>
# include <string>
# include "lab4.h"

using namespace std;

int main()
{

    StudentsGroup *group = new StudentsGroup(3);
    group -> showStudentsInGroup();

    return 0;

}
