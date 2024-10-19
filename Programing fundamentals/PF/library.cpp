#include <iostream>
using namespace std;

int main() {

    int num,lastnum,rev = 0;
    cout<<"Enter a 4 digit number: ";
    cin>>num;
    while (num != 0)
    {
        lastnum = num % 10 + 1;
        rev = rev * 10 + lastnum;
        num /=10;
    }
    num = rev;
    rev = 0;
    while (num != 0)
    {
        lastnum = num % 10;
        rev = rev * 10 + lastnum;
        num /=10;
    }

    cout<<"Your incremented number is: "<<rev<<endl;
    
    return 0;
}