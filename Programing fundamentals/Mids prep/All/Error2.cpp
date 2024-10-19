#include <iostream>
using namespace std;

int main()
{
    int n = 1, i = 1;
    do
    {
        cout << n << " ";
        while (i <= 10)
        {
            if (i < 5 && i != 2)
                cout << "X" << " ";
            i++;
        }
    } while (n++ <= 3);

    return 0;
}