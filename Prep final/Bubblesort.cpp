#include <iostream>
using namespace std;

int *bub(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    return arr;
}

int main()
{
    int target = 1;
    int arr[5] = {31, 1, 23, 34, 13};

    int *arr2 = bub(arr, 5);

    cout << "which element you want to find: ";
    cin >> target;

    int l = 0;
    int r = 5 - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == target)
        {
            cout << "found" << endl;
            return 0;
        }
        else if (arr[mid] < target)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << "not found!";
    return 0;
}