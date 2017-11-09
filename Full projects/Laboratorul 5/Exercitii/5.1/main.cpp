/// E5.1 in clasa Form declarati private: string color; si un getter/setter, private sau protected.
/// Accesati-le din Rectangle sau prin r si verificati daca sunt disponibili.

#include <iostream>

using namespace std;

class Form {

    private:
        string color;

    protected:
        string name;
        string getColor() {

            return this -> color;

        }
        void setColor(string color) {

            this -> color = color;

        }

    public:
        string getName() {

            return this -> name;

        }
        void setName(string name) {

            this -> name = name;

        }

};

class Rectangle:public Form {

    protected:
        int width;
        int height;

    public:
        void setWidth(int width) {

            this -> width = width;

        }
        int getWidth() {

            return this -> width;

        }

};

int main()
{
    Form *f = new Form();
    f -> setName("forma1");
    cout << "Forma: " << f -> getName() << '\n';

    Rectangle *r = new Rectangle();
    r -> setWidth(23);
    r -> setName("rectangle 1");

    /// r -> setColor("Red"); Nu este disponibil!

    cout << "Rectangle name: " << r -> getName() << "\nWidth: " << r -> getWidth() << '\n';

    return 0;
}
