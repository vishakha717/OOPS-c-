#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Hello" << endl;
    }

    void show(int a) {
        cout << "Value: " << a << endl;
    }
};

int main() {
    A obj;

    obj.show();
    obj.show(10);

    return 0;
}