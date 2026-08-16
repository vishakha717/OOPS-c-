#include <iostream>
using namespace std;

class Student
{
private:
    int marks = 80;

public:
    void show()
    {
        cout << marks;
    }
};

int main()
{
    Student s;
    s.show();

    return 0;
}