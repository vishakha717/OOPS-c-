#include <iostream>
using namespace std;

class Calculator
{
public:

    // Method 1
    void add(int a, int b)
    {
        cout << "Addition of 2 numbers = " << a + b << endl;
    }

    // Method 2
    void add(int a, int b, int c)
    {
        cout << "Addition of 3 numbers = " << a + b + c << endl;
    }
};

int main()
{
    Calculator obj;

    obj.add(10, 20);       // Method 1 call
    obj.add(10, 20, 30);   // Method 2 call

    return 0;
}