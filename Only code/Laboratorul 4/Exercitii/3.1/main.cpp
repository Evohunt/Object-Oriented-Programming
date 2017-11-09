/// 3.1 Modificati codul de mai sus astfel incit sa folositi B b in loc de B *b

#include <iostream>
#include <string>

using namespace std;

class A {
    int i;
    string s;

    public:
        A (int i1, string s1): i(i1), s(s1) {} // notati modul de apel ptr i si s din A !
        int getI() {

            return this -> i;
        }
        string getS() {

            return this -> s;

        }

};

class B {
    A a;
    string s;

    public:
        B(int i2,string s2): a(i2,s2), s("init value for s in A") {} // notati modul de apel ptr constructor
        string getS() {

            return this -> s;

        }
        A getA() {

            return this -> a;

        }

};

int main()
{
    B b (5, "init value for s in class A");
    cout << "B s:" << b.getS() << '\n';
    cout << "A s:" << b.getA().getI() << " i:" << b.getA().getS() << '\n';

    return 0;
}
