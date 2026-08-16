#include <iostream>
#include <string>
using namespace std;

int main()
{
    string msg = "How are you ?";
    string *p = &msg;

    cout << *p;

    return 0;
}