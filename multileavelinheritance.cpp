#include <iostream>
using namespace std;

class Person
{
public:
    void display()
    {
        cout << "I am a person" << endl;
    }
};
class Student : public Person
{
public:
    void study()
    {
        cout << "I am studying" << endl;
    }
};
class Monitor : public Student
{
public:
    void manage()
    {
        cout << "I am a monitor" << endl;
    }
};
int main()
{
    Monitor m;
    m.display();
    m.study();
    m.manage();

    return 0;
}