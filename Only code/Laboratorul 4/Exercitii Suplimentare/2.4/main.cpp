/// 2.4 Scrieti o metoda care sorteaza tabloul / lista de Student, studentsList, dupa name/note

# include <iostream>
# include <list>
# include <algorithm>
# include <string>
# include "lab4.h"

using namespace std;

int main()
{

    StudentsGroup *group = new StudentsGroup(3);
    group -> readStudents();

    /// group -> sortStudentsByGrade();
    group -> sortStudentsByName();

    group -> showStudentsInGroup();

    return 0;

}
