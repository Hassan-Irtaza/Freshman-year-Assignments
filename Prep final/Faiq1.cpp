#include <iostream>
using namespace std;

int main()
{
    int n;
    do
    {
        cout << "enter: ";
        cin >> n;
        if (n == 2 || n == 3)
        {
            cout << "prime!" << endl;
        }
        else if (n == 1 || n % 2 == 0 || n % 3 == 0)
        {
            cout << "not prime!" << endl;
        }
        else
        {
            cout << "prime!" << endl;
        }
    } while (n != 0);
    return 0;
}