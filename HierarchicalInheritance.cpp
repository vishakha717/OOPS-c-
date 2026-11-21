#include <iostream>
using namespace std;

class A {
public:
    void display() {
        cout << "This is Parent Class" << endl;
    }
};

class B : public A {
};

class C : public A {
};

int main() {
    A obj1;
    B obj2;
    C obj3;

    obj1.display();
    obj2.display();
    obj3.display();

    return 0;
}