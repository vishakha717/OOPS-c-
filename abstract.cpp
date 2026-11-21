  
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void display() = 0;
};

class Circle : public Shape {
public:
    void display() {
        cout << "This is a Circle";
    }
};

int main() {
    Circle c;
    c.display();

    return 0;
}
