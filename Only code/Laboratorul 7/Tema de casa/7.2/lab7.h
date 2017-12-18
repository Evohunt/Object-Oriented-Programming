#include <iostream>
#include <map>

using namespace std;

class Persoana {

    private:
        string nume;
        int varsta;

    public:
        Persoana() {}
        Persoana(string nume, int varsta);

        void setNume(string nume);
        void setVarsta(int varsta);

        string getNume();
        int getVarsta();


        class Student {

            private:
                double medie;

            public:
                Student() {}
                Student(double medie);

                void setMedie(double medie);
                double getMedie();

                class Sofer {

                    private:
                        string masina;

                    public:
                        Sofer() {}
                        Sofer(string masina);

                        void setMasina(string masina);
                        string getMasina();
                };

                Sofer *sofer = new Sofer;

        };

        Student *student = new Student;

};


