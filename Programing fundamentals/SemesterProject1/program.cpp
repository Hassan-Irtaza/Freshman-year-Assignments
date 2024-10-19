// swapping of two variables
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;
    cout<<"before swapping\n";
    cout<< a <<endl;
    cout<< b <<endl;
    a = a + b; //a = 30
    b = a - b; //b = 10
    a = a - b; //a = 20
    cout<<"after swapping\n";
    cout<< a <<endl;
    cout<< b <<endl;

    return 0;
}