using namespace std;

class Plant {

    protected:
        string name;

    public:
        Plant() {}
        Plant(string name) {

            this -> name = name;

        }

        virtual string getName() = 0;

};

class Carrot:public Plant {

    int vitaminsNumber;

    public:
        Carrot() {}
        Carrot(string name,
               int vitaminsNumber) : Plant (name)
        {

            this -> vitaminsNumber = vitaminsNumber;

        }

        string getName();

        int getVitaminsNumber();
        void print();

};

class FoodSource {

    protected:
        int quality;

    public:
        FoodSource() {}
        FoodSource(int quality) {

            this -> quality = quality;

        }

        virtual int getQuality() = 0;

};

class Chicken:public FoodSource {

    int age;

    public:
        Chicken() {}
        Chicken(int age,
                int quality) : FoodSource(quality)
        {

            this -> age = age;

        }

        int getQuality();

        int getAge();

};

class Apple:public Plant, FoodSource {

    string color;

    public:
        Apple() {}
        Apple(string name,
              string color,
              int quality) : Plant(name), FoodSource(quality)
        {

            this -> color = color;

        }

        string getName();
        int getQuality();

        string getColor();

};




