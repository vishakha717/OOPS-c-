#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int salary;

    void show()
    {
        cout << "Employee Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee e1, e2, e3;

    e1.name = "Rahul";
    e1.salary = 25000;

    e2.name = "Neha";
    e2.salary = 30000;

    e3.name = "Amit";
    e3.salary = 28000;

    e1.show();
    e2.show();
    e3.show();

    return 0;
}