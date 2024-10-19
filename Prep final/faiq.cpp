#include <iostream>
using namespace std;

inline int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int arr[3] = {11, 22, 33};
    int max = arr[0];
    int max2 = arr[0];
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] > max)
        {
            max2 = max;
            max = arr[i];
        }
    }
    cout << "the largest: " << max << endl;
    cout << "the second largest: " << max2 << endl;

    return 0;
}