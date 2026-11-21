#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 0;

    try {
        if (b == 0) {
            throw b;
        }

        cout << "Division: " << a / b;
    }
    catch (int e) {
        cout << "Cannot divide by zero";
    }

    return 0;
}