/// E.7.3.1. Adaptati exemplul 7.1 astfel incit sa folositi clase imbricate

#include <iostream>
#include <stdlib.h>

using namespace std;

class A {

    private:
        int a;

    public:
        A() {

            a = 23;

        }
        class B {

            private:
                int b;

            public:
                void showA(A &x) {
                    // Since B is friend of A, it can access
                    // private members of A
                    cout << "A::a = " << x.a;
                }

        };

        B b;

};



int main()
{

    ios_base::sync_with_stdio(false);
    system("color 03");

    A a;
    a.b.showA(a);

    return 0;
}
