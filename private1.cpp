#include <iostream>
using namespace std;

class Mobile
{
private:
    int password = 1234;

public:
    void showPassword()
    {
        cout << password;
    }
};

int main()
{
    Mobile m;          // Object
    m.showPassword();  // Function Call

    return 0;
}