#include <iostream>
using namespace std;

class Student
{
protected:
    int marks = 90;

public:
    void show()
    {
        cout << marks;
    }
};

int main()
{
    Student s1;
    s1.show();

    
    return 0;
}