// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5] = {1, 45, 6, 2, 5};
//     int *ptr = &arr[0];
//     cout << *ptr++ << endl;     // 1
//     cout << ++*ptr << endl;     // 46
//     cout << *(ptr + 3) << endl; // 5
//     cout << (*ptr + 3) << endl; //
//     cout << (*ptr - 1) << endl;
//     cout << *(ptr - 1) << endl;

//     cout << endl;

//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     cout << endl;
//     cout << endl;

//     ptr = &arr[2];
//     cout << (*ptr + 3) << endl;
//     cout << *(ptr + 3) << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 1, b = 2;
//     cout << *(&a) + *(&b);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     double a[] = {45.7, 23.5, 14.2, 38.8, 48.6, 32.3};
//     for (int i = 0; i < 6; i++)

//     {
//         for (int j = i + 1; j < 6; j++)
//         {
//             if (a[i] > a[j])
//             {
//                 swap(a[i], a[j]);
//             }
//         }
//     }
//     for (int i = 0; i < 6; i++)
//     {
//         cout << a[i] << " ";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int calculateStringLength(char *ptr)
// {
//     int counter = 0;
//     while (*ptr != '\0')
//     {
//         ptr++;
//         counter++;
//     }
//     return counter;
// }

// int main()
// {
//     char text[100];
//     char *str = text;

//     cout << "Enter any string: ";
//     cin.getline(text, 100);

//     int strLength = calculateStringLength(str);
//     cout << "Length of " << text << " is " << strLength;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a[] = {1, 2, 3, 2, 1};
//     int size = sizeof(a) / sizeof(a[0]);
//     for (int i = 0; i < size / 2; i++)
//     {
//         if (a[i] != a[size - 1 - i])
//         {
//             cout << "is not palindrome";
//             return 0;
//         }
//     }
//     cout << "is a palindrome";
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a[3] = {1, 2, 3};
//     int *ptr = a;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << *(ptr++) << " ";
//     }
//     cout << endl;
//     for (int i = 0; i < 3; i++)
//     {
//         int *ptr = &a[i];
//         cout << *ptr << " ";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// struct sec
// {
//     int x;
//     char y;

//     char sum(sec &s)
//     {
//         char c = s.x + s.y;
//         return c;
//     }
// };
// sec *myfunc(sec s[])
// {
//     for (int i = 0; i < 2; i++)
//     {
//         cin >> s[i].x;
//         cin >> s[i].y;
//     }
//     return s;
// }
// int main()
// {
//     sec s[2];
//     sec *ptr = s;
//     sec *s2 = myfunc(s);

//     for (int i = 0; i < 2; i++)
//     {
//         cout << s2[i].x << endl;
//         cout << s2[i].y << endl;
//     }

//     return 0;
// }