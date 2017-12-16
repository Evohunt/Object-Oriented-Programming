using namespace std;

class Weapon {

    protected:
        int dangerRank;
        bool classified;
        string name;

    public:
        Weapon() {};
        Weapon(int dangerRank, bool classified, string name) {

            this -> dangerRank = dangerRank;
            this -> classified = classified;
            this -> name = name;

        }

        virtual ~Weapon() {}

        virtual int getDangerRank() = 0;
        virtual bool isClassified() = 0;

        virtual void printWeapon();
        string getName();

};

class Sling:public Weapon {

    int resistance;

    public:
        Sling() {}
        Sling(int resistance,
              int dangerRank,
              bool classified,
              string name) : Weapon (dangerRank,
                                     classified,
                                     name)
        {

            this -> resistance = resistance;

        }

        int getDangerRank();
        bool isClassified();

        int getResistance();
        void printWeapon();

};

class AtomicBomb:public Weapon {

    int releasedEnergy;

    public:
        AtomicBomb() {}
        AtomicBomb(int releasedEnergy,
                   int dangerRank,
                   bool classified,
                   string name) : Weapon (dangerRank,
                                          classified,
                                          name)
        {

            this -> releasedEnergy = releasedEnergy;

        }

        int getDangerRank();
        bool isClassified();

        int getReleasedEnergy();
        void printWeapon();

};

class Gun:public Weapon {

    protected:
        int magazineCapacity;

    public:
        Gun() {}
        Gun(int magazineCapacity,
            int dangerRank,
            bool classified,
            string name) : Weapon (dangerRank,
                                   classified,
                                   name)
        {

            this -> magazineCapacity = magazineCapacity;

        }

        int getDangerRank();
        bool isClassified();

        int getMagazineCapacity();
        void printWeapon();

};

class Rifle:public Gun {

    int type;

    public:
        Rifle() {}
        Rifle(int type,
              int magazineCapacity,
              int dangerRank,
              bool classified,
              string name) : Gun(magazineCapacity,
                                 dangerRank,
                                 classified,
                                 name)
        {

            this -> type = type;

        }

        int getDangerRank();
        bool isClassified();

        int getType();
        void printWeapon();

};

class MachineGun:public Rifle {

    int heatingPoint;

    public:
        MachineGun() {}
        MachineGun(int heatingPoint,
                   int type,
                   int magazineCapacity,
                   int dangerRank,
                   bool classified,
                   string name) : Rifle(type,
                                        magazineCapacity,
                                        dangerRank,
                                        classified,
                                        name)
        {

            this -> heatingPoint = heatingPoint;

        }

        int getDangerRank();
        bool isClassified();

        int getHeatingPoint();
        void printWeapon();

};


