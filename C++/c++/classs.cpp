#include <iostream>
using namespace std;

class Car
{
public:
    string color;
    int price;

    void display()
    {
        cout << "Car Color: " << color << endl;
        cout << "Car Price: " << price << endl;
    }
};

int main()
{
    Car c1;   // Object

    c1.color = "Red";
    c1.price = 500000;

    c1.display();

    return 0;
}