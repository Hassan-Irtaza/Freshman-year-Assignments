#include <iostream>
using namespace std;

int main()
{
    int num, ognum, digit, res = 0;
    cout << "Enter any digit number: ";
    cin >> num;
    ognum = num;
    while (ognum != 0)
    {
        digit = ognum % 10;
        res = res * 10 + digit;
        ognum /= 10;
    }
    if (num == res)
    {
        cout << "your num is a palindrome!!!" << endl;
    }

    return 0;
}