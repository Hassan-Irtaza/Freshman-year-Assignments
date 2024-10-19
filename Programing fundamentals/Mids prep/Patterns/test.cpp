#include <iostream>
using namespace std;

int main()
{
    int num, num2;
    cout << "enter a num: ";
    cin >> num;
    cout << "enter a num: ";
    cin >> num2;
    if (num2 % num == 0)
    {
        cout << num << " is a multiple of " << num2 << endl;
    }
    else if (num % num2 == 0)
    {
        cout << num2 << " is a multiple of " << num << endl;
    }
    else
    {
        cout << "both are not multiples of eachother " << endl;
    }

    return 0;
}