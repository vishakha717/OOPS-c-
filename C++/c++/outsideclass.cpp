#include <iostream>
using namespace std;

class Student
{
public:
    string name = "Vishakha";

    void display()
    {
        cout << name << endl;   // Class Outside
    }
};

int main()
{
    Student s;
    s.display();

    return 0;
}