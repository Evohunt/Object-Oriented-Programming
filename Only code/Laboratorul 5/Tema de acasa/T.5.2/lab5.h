using namespace std;

class Desert {

    protected:
        int pret;
        string nume;

    public:
        Desert();
        Desert(int pret, string nume);
        string get_name();
        void set_name(string nume);
        int get_price();
        void set_price(int pret);
        void print_weigth();

};

class Prajitura:public Desert {

    int greutate;

    public:
        Prajitura(int pret, string nume, int greutate):Desert(pret, nume) { this -> greutate = greutate; };
        void set_weigth(int greutate);
        int get_weigth();
        void print_weigth();

};

class TortAniversare:public Desert {

    int greutate;

    public:
        TortAniversare(int pret, string nume, int greutate):Desert(pret, nume) { this -> greutate = greutate; };
        void set_weigth(int greutate);
        int get_weigth();
        void print_weigth();

};
