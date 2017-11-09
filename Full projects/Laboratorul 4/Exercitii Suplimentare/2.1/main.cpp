/// 2.1 Optimizati codul de mai sus astfel incit in loc de studentsList[i].setNote(note) si studentsList[i].setName(studentName);
/// sa folosim studentsList[i] = Student(note, studentName);

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
