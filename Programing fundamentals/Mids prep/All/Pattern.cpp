#include <iostream>
using namespace std;

/*
Enter the number of rows: 5
X
XX
XXX
XXXX
XXXXX
*/

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "X";
        }
        cout << endl;
    }

    return 0;
}