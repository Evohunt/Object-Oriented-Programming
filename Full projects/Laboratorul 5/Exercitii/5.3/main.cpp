/// Exercitiul 5.3 Definiti destructori pentru clasele Form si Rectangle cu mesaje specifice afisate in consola.
/// Apelati destructorul pentru f si r. Observati ce se intimpla si care este ordinea de apelare a acestora.

#include <iostream>

using namespace std;

class Form {

    private:
        string color;

    protected:
        string name;
        void setColor(string color) {

            this -> color = color;

        }

    public:
        Form(string name) {

            this -> name = name;

        }
        string getName() {

            return this -> name;

        }
        void setName(string name) {

            this -> name = name;

        }
        ~Form() {

            cout << "Called destructor of Form.\n";

        }

};

class Rectangle:public Form {

    protected:
        int width;
        int height;

    public:
        Rectangle(string name, int width, int height) :Form(name) {

            this -> width = width;
            this -> height = height;

        }
        void setWidth(int width) {

            this -> width = width;

        }
        int getWidth() {

            return this -> width;

        }
        ~Rectangle() {

            cout << "Called destructor of Rectangle.\n";

        }

};

int main()
{
    Form *f = new Form("forma1");
    cout << "Forma: " << f -> getName() << '\n';
    Rectangle *r = new Rectangle("rectangle 1", 1, 2);
    cout << "Rectangle name: " << r -> getName() << "\nWidth: " << r -> getWidth() << '\n';

    delete r;

    return 0;
}
