#include <iostream>

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

        class Parinte {
            private:
                string prenume;

            public:
                Parinte() {}
                Parinte(string prenume);

                void setPrenume(string prenume);
                string getPrenume();

                class Copil {

                    private:
                        string prenume;
                        string status;

                    public:
                        Copil() {}
                        Copil(string prenume, string status);

                        void setPrenume(string prenume);
                        string getPrenume();

                        void setStatus(string status);
                        string getStatus();

                };

                Copil *copil1 = new Copil;
                Copil *copil2 = new Copil;
                Copil *copil3 = new Copil;

                class Sofer {

                    private:
                        string masina;
                        string tipPermis;

                    public:
                        Sofer() {}
                        Sofer(string masina, string tipPermis);

                        void setMasina(string masina);
                        string getMasina();

                        void setTipPermis(string tipPermis);
                        string getTipPermis();

                        class Angajat {

                            private:
                                int salariu;
                                string meserie;

                            public:
                                Angajat() {}
                                Angajat(int salariu, string meserie);

                                void setSalariu(int salariu);
                                int getSalariu();

                                void setMeserie(string meserie);
                                string getMeserie();

                        };

                        Angajat *angajat = new Angajat;

                };

                Sofer *sofer = new Sofer;
        };

        Parinte *parinte = new Parinte;
};
