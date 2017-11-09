/// 1.4 Implementati o metoda readStudents in clasa StudentsGroup pentru citirea studentilor

# include <iostream>
# include <string>
# include "lab4.h"

using namespace std;

int main()
{

    StudentsGroup *group = new StudentsGroup(3);
    group -> readStudents();
    group -> showStudentsInGroup();

    return 0;

}
