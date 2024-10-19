#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5, key;
    cout << "before deletion" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "which index do you want to delete: ";
    cin >> key;
    arr[key] == arr[size - 1];
    size--;
    cout << "after deletion" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}