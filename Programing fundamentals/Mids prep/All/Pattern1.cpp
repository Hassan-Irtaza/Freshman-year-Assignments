#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << n << " ";
            n = n + 5;
        }
        cout << endl;
    }

    return 0;
}