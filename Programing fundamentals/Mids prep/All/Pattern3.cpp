#include <iostream>
using namespace std;

/*
Enter the number of rows: 5
XXXXX
XXXX
XXX
XX
X
*/

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            cout << "X";
        }
        cout << endl;
    }

    return 0;
}