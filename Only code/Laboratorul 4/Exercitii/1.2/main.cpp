/// 1.2 Modificati codul astfel incit in constructorii Student si StudentsGroup sa folositi cuvintul cheie this.

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
