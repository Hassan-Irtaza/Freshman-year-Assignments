// swapping two inputs
#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int i;
    
    // while (isdigit(a) && isdigit(b))
    do{
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Enter a number: ";
    cin>>b;
    cout<<"Before swapping: "<<endl;
    cout<< a <<endl;
    cout<< b <<endl;
    cout<<"After swapping: "<<endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<< a <<"\n"<< b <<"\n";
    cout<<"Press 1 to try again and zero to quit program"<<endl;
    cin>>i;
    }while(i != 0);
    
    return 0;
}