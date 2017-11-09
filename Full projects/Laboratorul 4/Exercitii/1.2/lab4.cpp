# include <iostream>
# include <string>
# include "lab4.h"

/// Functions for class Student
Student::Student(int note) {

    this -> note = note;

}

void Student::setNote(int n) {

    note = n;

}

int Student::getNote() {

    return note;

}


/// Functions for class StudentsGroup
StudentsGroup::StudentsGroup(int studentsNumber) {

    this -> studentsNumber = studentsNumber;
    studentsList = new Student[studentsNumber];

}

void StudentsGroup::showStudentsInGroup() {

    for(int i = 0; i < studentsNumber; i++) {

        cout << i << ": " << studentsList[i].getNote() << '\n';

    }

}
