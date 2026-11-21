#include <iostream>
using namespace std;

class Car
{
public:
    void showCar()
    {
        cout << "Car: BMW" << endl;
        cout << "Color: Black" << endl;
    }
};

class Mobile
{
public:
    void showMobile()
    {
        cout << "Mobile: iPhone" << endl;
        cout << "Storage: 128 GB" << endl;
    }
};

int main()
{
    Car c;
    Mobile m;

    c.showCar();
    m.showMobile();

    return 0;
}