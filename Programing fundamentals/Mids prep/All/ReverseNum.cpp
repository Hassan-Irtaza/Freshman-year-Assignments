#include <iostream>
using namespace std;

int main()
{
    int num, ognum, digit, res = 0, count = 0;
    cout << "Enter any digit number: ";
    cin >> num;
    ognum = num;
    int temp = num;

    while (temp != 0)
    {
        digit = temp % 10;
        temp /= 10;
        count++;
    }

    while (ognum != 0)
    {
        digit = ognum % 10;
        res += pow(digit, count);
        ognum /= 10;
    }
    if (res == num)
    {
        cout << "Your num is a armstrong number: " << num << endl;
    }
    else
    {
        cout << "Your num is a not armstrong number: " << num << endl;
    }

    return 0;
}