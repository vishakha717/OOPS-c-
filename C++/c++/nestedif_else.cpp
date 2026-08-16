#include <iostream>
using namespace std;

int main()
{
    int num = 8;

    if (num > 0)
    {
        if (num % 2 == 0)
        {
            cout << "Positive Even Number";
        }
        else
        {
            cout << "Positive Odd Number";
        }
    }
    else
    {
        cout << "Number is Zero or Negative";
    }

    return 0;
}