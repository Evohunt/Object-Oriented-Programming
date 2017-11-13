/// 1. Declarati un constructor private, care seteaza nota unui element de tip
/// class Student la 8. Folositi-l ptr a initializa grade in constructorul
/// initial
/// 2. Folositi un membru variabila declarat static cu care sa numarati citi
/// studenti sunt creati in acest moment. Adresati membrul static in
/// constructor si destructor pentru a incrementa, decrementa numarul de
/// studenti.
/// 3. Creati o lista simplu inlantuita de studenti ( class Student). Afisati
/// lista. Proiectati structura astfel incit sa pot afisa lista plecind de la
/// oricare element al ei. Gasiti un mod simplu de a numara citi studenti s-au
/// creat.
/// 4. Creati o clasa de tip masina cu 3 constructori, 2 publici si unul
/// privat, unul din constructori fara parametriii. Folositi this in
/// respectivii contructori

#include <iostream>
#include <list>

using namespace std;

class Student {

    int grade;
    string name;
    Student(int grade = 8, string name = "") {

        this -> grade = grade;
        this -> name = name;

    }

    public:
        static Student* give_grade_and_name(int grade, string name) {

            return new Student(grade, name);

        }
        ~Student() {}
        int get_grade() {

            return this -> grade;

        }
        string get_name() {

            return this -> name;

        }


};

class StudentGroup {

    int number;
    list<Student> database;

    public:
        StudentGroup(int number) {

            this -> number = number;
            list<Student> database;

        }
        void read_student() {

            int grade;
            string name;

            for (int i = 0; i < this -> number; i++) {

                cout << "Student " << i << " name: ";
                cin >> name;
                cout << "Student " << i << " grade: ";
                cin >> grade;
                cout << '\n';

                Student *new_student;
                new_student = Student::give_grade_and_name(grade, name);
                database.push_back(*new_student);

            }

        }
        void print_students() {

            for (auto it = database.begin(); it != database.end(); it++) {

                cout << it -> get_name() << ": " << it -> get_grade() << '\n';

            }

        }
        int get_number_of_students() {

            return this -> number;

        }

};

class Masina {

    double price;
    string name;

    Masina(double price, string name = "N/A") {

        this -> price = price;
        this -> name = name;

    }

    public:
        static Masina* give_price(double price) {

            return new Masina(price);

        }
        static Masina* give_price_and_name(double price, string name) {

            return new Masina(price, name);

        }
        ~Masina() {}
        double get_price() {

            return this -> price;

        }
        string get_name() {

            return this -> name;

        }

};

int main()
{

    StudentGroup *new_group = new StudentGroup(3);
    new_group -> read_student();
    new_group -> print_students();
    int student_number = new_group -> get_number_of_students();
    cout << "There are " << student_number << " students in total.\n";

    cout << "\n\n\n";

    Masina* dacia;
    dacia = Masina::give_price_and_name(3500, "Dacia Logan");

    double pret_dacia = dacia -> get_price();
    string nume_dacia = dacia -> get_name();

    cout << "Nume: " << nume_dacia << '\n';
    cout << "Pret: $" << pret_dacia << '\n';


    return 0;
}
