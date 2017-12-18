/// E.7.1.1 In exemplul de mai sus, comentați toată linia marcată cu roșu si interpretatți răspunsul.

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
        friend class B; // Friend Class.
};

class B {
    private:
        int b;

    public:
        void showA(A& x) {
            // Since B is friend of A, it can access
            // private members of A
            cout << "A::a = " << x.a;
        }
};

int main()
{

    ios_base::sync_with_stdio(false);
    system("color 03");

    A a;
    B b;
    b.showA(a);

    return 0;
}
