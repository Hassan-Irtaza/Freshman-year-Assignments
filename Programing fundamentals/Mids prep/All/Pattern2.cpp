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
        for (int x = i - 1; x >= i; x++)
        {
            cout << " ";
        }

        for (int j = (n + 1) - i; j >= i; j--)
        {
            cout << "X";
        }
        cout << endl;
    }

    return 0;
}