/// 1.1 Adaptati codul de mai sus astfel incat sa folositi fisiere header

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
