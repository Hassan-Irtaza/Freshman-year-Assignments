#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "enter an alphabet: ";
    cin >> ch;
    for (int i = 1; i <= 5; i++)
    {
        ch = ch + 1;
        cout << ch << " ";
    }

    return 0;
}