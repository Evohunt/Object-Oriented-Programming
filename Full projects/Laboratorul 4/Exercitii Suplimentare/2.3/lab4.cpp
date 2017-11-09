# include <iostream>
# include <list>
# include <string>
# include "lab4.h"

/// Functions for class Student
Student::Student(int note, string name) {

    this -> note = note;
    this -> name = name;

}

void Student::setNote(int n) {

    note = n;

}

int Student::getNote() {

    return note;

}

void Student::setName(string name) {

    this -> name = name;

}

string Student::getName() {

    return this -> name;

}

/// Functions for class StudentsGroup
StudentsGroup::StudentsGroup(int studentsNumber) {

    this -> studentsNumber = studentsNumber;
    list<Student> studentsList;

}

void StudentsGroup::showStudentsInGroup() {

    for (auto it = studentsList.begin(); it != studentsList.end(); it++) {

        cout << it -> getName() << ": " << it -> getNote() << '\n';


    }

}

void StudentsGroup::readStudents() {

    int grade;
    string studentName;

    for (int i = 0; i < this -> studentsNumber; i++) {

        cout << "Student number " << i << " name: ";
        cin >> studentName;
        cout << "Student number " << i << " grade: ";
        cin >> grade;

        Student new_student (grade, studentName);

        studentsList.push_back(new_student);

    }

}
