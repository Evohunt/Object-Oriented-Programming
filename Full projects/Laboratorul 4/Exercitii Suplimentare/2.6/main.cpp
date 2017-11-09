/// 2.6 Scrieti o metoda care returneaza primul element Student cu note egala cu 5. Considerati cazurile studentsList ca
/// tabloul / lista. Ce returneaza in caz ca nu a gasit un asemenea element ?
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

    /// *new_student = group -> getMaximumGradeStudent();

    /// cout << "\nHighest grade student:\n" << new_student -> getName() << ": " << new_student -> getNote();

    *new_student = group -> getFirstStudentWithFive();
    cout << "\nThe first student with a 5: " << new_student -> getName();

    return 0;

}
