#include <iostream>
using namespace std;

class Employee
{
protected:
    int salary = 25000;

public:
    void showSalary()
    {
        cout << "Salary = " << salary;
    }
};

int main()
{
    Employee e;
    e.showSalary();

    return 0;
}