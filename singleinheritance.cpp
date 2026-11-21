#include <iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "This is Parent Class" << endl;
    }
};

class B : public A
{
public:
    void display()
    {
        cout << "This is Child Class" << endl;
    }
};

int main()
{
    B obj;
    obj.show();
    obj.display();

    return 0;
}