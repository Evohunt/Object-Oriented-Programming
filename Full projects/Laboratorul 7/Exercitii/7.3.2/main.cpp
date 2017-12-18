/// E.7.3.2 Adaptati Exemplul 7.4 astfel incit innerClass sa fie private. Ce se poate întâmpla ?

#include <iostream>
#include <stdlib.h>

using namespace std;

class A {

    public:
        struct innerStructure {

            int a;
            void setA(int a) {

                this -> a = a;

            }
            int getA(){

                return this -> a;

            }

        };

        class innerClass {

            public:
                int a;
                void setA(int a){

                    this -> a = a;

                }
                int getA(){

                    return this -> a;

                }

        };

        innerStructure innerStructure;

        private:
            innerClass innerClass;

};

int main()
{

    ios_base::sync_with_stdio(false);
    system("color 03");

    A instanceOfA;
    instanceOfA.innerStructure.setA(48);
    cout << "innerStructure a = " << instanceOfA.innerStructure.getA() << '\n';

    instanceOfA.innerClass.setA(56);
    cout << "instanceOfA a: " << instanceOfA.innerClass.getA() << '\n';

    return 0;
}
