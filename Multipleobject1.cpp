#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student s1, s2, s3;   // Multiple Objects

    s1.name = "Rahul";
    s1.age = 20;

    s2.name = "Priya";
    s2.age = 21;

    s3.name = "Amit";
    s3.age = 22;

    s1.display();
    s2.display();
    s3.display();

    return 0;
}