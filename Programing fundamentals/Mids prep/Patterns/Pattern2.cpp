#include <iostream>
using namespace std;

void pypart2(int n)
{
    // number of spaces
    int k = 2 * n - 2;

    for (int i = n; i > 0; i--)
    {

        // Inner loop to handle number spaces
        for (int j = 0; j < n - i; j++)
            cout << " ";

        // Decrementing k after each loop
        k = k - 2;

        // Inner loop to handle number of columns

        for (int j = 0; j < i; j++)
        {

            cout << "* ";
        }

        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    pypart2(n);
    return 0;
}
