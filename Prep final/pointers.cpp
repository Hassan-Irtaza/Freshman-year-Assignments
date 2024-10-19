#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int *p = &a;
    // cout << p << endl;
    // cout << *p << endl;
    int b[5] = {11, 22, 33, 44, 55};
    int *q = &b[0];
    for (int i = 0; i < 5; i++)
    {
        cout << *q + i << endl;
    }

    return 0;
}