// #include <iostream>

// using namespace std;

// struct student
// {
//     int rno;
//     string name;
// };

// int main()
// {
//     student arr[2];
//     int key;
//     bool check = false;

//     for (int i = 0; i < 2; i++)
//     {

//         cout << "Enter your name" << endl;
//         cin >> arr[i].name;
//         cout << "Enter your roll number" << endl;
//         cin >> arr[i].rno;
//     }
//     cout << "which roll number do you wish to find" << endl;
//     cin >> key;
//     for (int i = 0; i < 2; i++)
//     {
//         if (arr[i].rno == key)
//         {
//             cout << arr[i].name << endl;
//             return 0;
//         }
//     }
//     if (check == false)
//     {
//         cout << "The roll number is not found" << endl;
//     }

//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{

    int arr[5] = {1, 4, 6, 2, 5};
    int *ptr;
    ptr = &arr[0];
    cout << *ptr++ << endl;
    cout << ++*ptr << endl;
    cout << *(ptr + 3) << endl;
    cout << (*ptr + 3) << endl;
    cout << (*ptr - 1) << endl;
    cout << *(ptr - 1) << endl;
    cout << endl;
    ptr = &arr[2];
    cout << (*ptr + 3) << endl;
    cout << *(ptr + 3) << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{

    int arr[5] = {1, 4, 6, 2, 5};
    int *ptr;
    ptr = &arr[0];
    cout << *ptr++ << endl;
    cout << ++*ptr << endl;
    cout << *ptr + 3 << endl;
    cout << *(ptr + 3) << endl;
    cout << *ptr - 1 << endl;
    cout << *(ptr - 1) << endl;
    ptr = &arr[2];
    cout << *ptr + 3 << endl;
    cout << *(ptr + 3) << endl;
    return 0;
}