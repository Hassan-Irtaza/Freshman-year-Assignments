#include <iostream>
using namespace std;

int main()
{
//     for (int i = 0; i < 5; ++i)
//     {
//         cout<<i;
//     }

//     int i = 0;
//     while (i < 5)
//     {
//      cout<<i; 
//      ++i;  
//     }

//     char a[16];
// //how to jump between characters
//     char a = 'a';
//     int b = 3;
//     char z = a + b;
//     cout<< z;
char a = '2';
char b = '2';
int z = a + b;
cout << z<<endl;
    return 0;
}

/* 
- Variable is a memory location that is used to hold user data
int a; is variable decleration
int a = 1; is variable decleration and initialization

- Size of data types

int = 8 bytes
long int = 8 bytes
float = 8 bytes
string = 4 bytes
char = 1 bytes

32 bit systems have int memeory size of 2 bytes
64 bit systems have int memeory size of 4 bytes

- Range of data type
For int data type
underflow less then -32,276.
under flow more then 32,276.

- What does data type tell us?
1.nature of data
2.size of data
3.operations for the data

- Scope of data:
1.Global scope: A variable that can be used accesed throughout the program
2.Local scope: A variable that can only be used accesed in the body of the function

- Life time of a variable
The process of creation and destruction of a variable
1.Global Variable has a lifetine of the whole duration of the program
2.local vairable has a lifetime of the function it is residing inside of

*/