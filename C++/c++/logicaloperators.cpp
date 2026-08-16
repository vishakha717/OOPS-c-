#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;

    // Logical AND (&&)
    cout << "AND (a > 5 && b > 15) = " << (a > 5 && b > 15) << endl;

    // Logical OR (||)
    cout << "OR (a > 15 || b > 15) = " << (a > 15 || b > 15) << endl;

    // Logical NOT (!)
    cout << "NOT !(a > 5) = " << !(a > 5) << endl;

    return 0;
}