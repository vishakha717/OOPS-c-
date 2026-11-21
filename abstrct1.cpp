
#include <iostream>
using namespace std;

class Employee {
public:
    virtual void salary() = 0;
};

class Manager : public Employee {
public:
    void salary() {
        cout << "Manager Salary: 50000";
    }
};

int main() {
    Manager m;
    m.salary();

    return 0;
}
