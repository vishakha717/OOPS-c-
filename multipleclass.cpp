#include <iostream>
using namespace std;

class Student
{
public:
    void studentInfo()
    {
        cout << "Student Name: Diya" << endl;
        cout << "Age: 20" << endl;
    }
};

class College
{
public:
    void collegeInfo()
    {
        cout << "College: ABC College" << endl;
        cout << "Course: BSc IT" << endl;
    }
};

int main()
{
    Student s;
    College c;

    s.studentInfo();
    c.collegeInfo();

    return 0;
}