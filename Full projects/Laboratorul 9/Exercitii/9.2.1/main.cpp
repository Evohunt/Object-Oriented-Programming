/// E.9.2.1. În Exemplul 9.1, înlocuiți linia
/// virtual void PrintBalance() { cerr << "Error. Balance not available for base type." << endl; }
/// din class Account, cu virtual void PrintBalance() = 0; și modificați codul astfel încât să nu apară erori.

#include <iostream>
#include <stdlib.h>

using namespace std;

class Account {

    public:

        Account( double d ) {

            _balance = d;

        }
        virtual double GetBalance() {

            return _balance;

        }
        virtual void test() {

            cout << "Account test" << '\n';    //not so usefull for test()

        }
        virtual void PrintBalance() = 0;

    private:

        double _balance; // another naming convention for private variables

};

void Account::PrintBalance() {

    cerr << "Error. Balance not available for base type." << '\n';

}

class CheckingAccount : public Account {

    public:

        CheckingAccount(double d) : Account(d) {}
        void test() {

            cout << "CheckingAccount test" << '\n';    //not so useful for test()

        }
        void PrintBalance() {

            cout << "Checking account balance: " << GetBalance() << '\n';

        }

};

class SavingsAccount : public Account {

public:
    SavingsAccount(double d) : Account(d) {}
    void test() {

        cout << "SavingsAccount test" << '\n';    //not so useful for test()

    }
    void PrintBalance() {

        cout << "Savings account balance: " << GetBalance() << '\n';

    }

};

int main()
{

    ios_base::sync_with_stdio(false);
    system("color 03");

    CheckingAccount *pChecking = new CheckingAccount (100.00);
    SavingsAccount *pSavings = new SavingsAccount (1000.00);

    pChecking -> PrintBalance();
    pSavings->PrintBalance();

    cout << '\n';

    Account *pAccount;
    pAccount = pChecking;
    pAccount -> PrintBalance();
    pAccount -> test();

    cout << '\n';

    pAccount = pSavings;
    pAccount -> PrintBalance();
    pAccount -> test();

    return 0;
}
