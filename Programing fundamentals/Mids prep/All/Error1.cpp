#include <iostream>
using namespace std;

int main()
{
    int x, y = 1;
    for (int i = 1; i <= 5; i++)
    {
        cout << "Enter number: ";
        cin >> x;
        if (x <= 0)
            continue;
        y *= x;
        cout << y;
    }
    cout << y;
    return 0;
}