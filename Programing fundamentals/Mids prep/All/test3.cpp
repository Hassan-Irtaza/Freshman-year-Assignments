#include <iostream>
using namespace std;

int main()
{
    double pri, intr, time, total_intr;
    cout << "Enter the principal amount:";
    cin >> pri;
    while (pri < 0)
    {
        cout << "Enter the principal amount:";
        cin >> pri;
    }

    cout << "Enter the interest rate:";
    cin >> intr;
    while (intr < 0)
    {
        cout << "Enter the interest rate:";
        cin >> intr;
    }

    cout << "Enter the time period:";
    cin >> time;
    while (time < 0)
    {
        cout << "Enter the time period:";
        cin >> time;
    }
    return 0;
}