/// 2.5 Scrieti o metoda care returneaza Student cu nota maxima

# include <iostream>
# include <list>
# include <string>
# include "lab4.h"

using namespace std;

int main()
{

    StudentsGroup *group = new StudentsGroup(3);
    group -> readStudents();

    /// group -> sortStudentsByGrade();
    /// group -> sortStudentsByName();

    /// group -> showStudentsInGroup();

    Student *new_student = new Student;

    *new_student = group -> getMaximumGradeStudent();

    cout << "\nHighest grade student:\n" << new_student -> getName() << ": " << new_student -> getNote();

    return 0;

}
