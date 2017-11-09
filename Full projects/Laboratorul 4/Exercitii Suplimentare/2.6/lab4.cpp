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


void StudentsGroup::sortStudentsByGrade() {

    studentsList.sort( []( Student & stud1, Student & stud2 ) { return stud1.getNote() < stud2.getNote(); } );

}

void StudentsGroup::sortStudentsByName() {

    studentsList.sort( []( Student & stud1, Student & stud2 ) { return stud1.getName().compare(stud2.getName()) < 0; } );

}

Student StudentsGroup::getMaximumGradeStudent() {

    Student *new_student = new Student(0, "");

    for (auto it = studentsList.begin(); it != studentsList.end(); it++) {

        if (it -> getNote() > new_student -> getNote()) {

            *new_student = *it;

        }

    }

    return *new_student;

}

Student StudentsGroup::getFirstStudentWithFive() {

    Student *new_student = new Student(0, "");

    for (auto it = studentsList.begin(); it != studentsList.end(); it++) {

        if (it -> getNote() == 5) {

            *new_student = *it;
            break;

        }

    }

    return *new_student;

}
