/// 2.3 Implementati studentsList cu lista simplu sau dublu inlantuita de Student

# include <iostream>
# include <list>
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
