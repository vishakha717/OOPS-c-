#include <iostream>
using namespace std;

class ATM
{
protected:
    int balance = 5000;

public:
    void showBalance()
    {
        cout << "Balance = " << balance;
    }
};

int main()
{
    ATM a;

    a.showBalance();

    return 0;
}