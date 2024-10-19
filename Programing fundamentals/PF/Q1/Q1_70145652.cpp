#include <iostream>
using namespace std;

// add a feature to take equal values as well

int main() {
    int a, b, c, d, Num1, Num2, Num3, Num4, choice;

    do
    {

        cout << "Enter a 1st number: ";
        cin >> a;
        cout << "Enter a 2nd number: ";
        cin >> b;
        cout << "Enter a 3rd number: ";
        cin >> c;
        cout << "Enter a 4th number: ";
        cin >> d;

    // a is smallest
        if (a <= b && a <= c && a <= d)
        {
            Num1 = a;
            // b is 2nd smallest
            if (b <= c && b <= d) {
                Num2 = b;
                if (c <= d) {
                    Num3 = c;
                    Num4 = d;
                }else {
                    Num3 = d;
                    Num4 = c;
                }
            }
            // c is second smallest
            else if (c <= b && c <= d){
                Num2 = c;
                if (b <= d) {
                    Num3 = b;
                    Num4 = d;
                }else {
                    Num3 = d;
                    Num4 = b;
                }
            }
            // d is second smallest
            else if (d <= b && d <= c)
            {
                Num2 = d;
                if (b <= c) {
                    Num3 = b;
                    Num4 = c;
                }else {
                    Num3 = c;
                    Num4 = b;
                }
            }
        }
    // b is smallest
        else if (b <= a && b <= c && b <= d)
        {
        Num1 = b;
            // a is second smallest
            if (a <= c && a <= d) {
                Num2 = a;
                if (c <= d) {
                    Num3 = c;
                    Num4 = d;
                }else {
                    Num3 = d;
                    Num4 = c;
                }
            }
            // c is second smallest
            else if (c <= a && c <= d){
                Num2 = c;
                if (a <= d) {
                    Num3 = a;
                    Num4 = d;
                }else {
                    Num3 = d;
                    Num4 = a;
                }
            }
            // d is second smallest
            else if (d <= a && d <= c)
            {
                Num2 = d;
                if (a <= c) {
                    Num3 = a;
                    Num4 = c;
                }else {
                    Num3 = c;
                    Num4 = a;
                }
            }
        }
    // c is the smallest
        else if (c <= a && c <= b && c <= d)
        {
            Num1 = c;
            // b is second smallest
            if (b <= a && b <= d) {
                Num2 = b;
                if (a <= d) {
                    Num3 = a;
                    Num4 = d;
                }else {
                    Num3 = d;
                    Num4 = a;
                }
            }
            // a is second smallest
            else if (a <= b && a <= d){
                Num2 = a;
                if (b <= d) {
                    Num3 = b;
                    Num4 = d;
                }else {
                    Num3 = d;
                    Num4 = b;
                }
            }
            // d is second smalest
            else if (d <= b && d <= a)
            {
                Num2 = d;
                if (b <= a) {
                    Num3 = b;
                    Num4 = a;
                }else {
                    Num3 = a;
                    Num4 = b;
                }
            }
        }
    // d is the smallest
        else if(d <= a && d <= b && d <= c){
            Num1 = d;
            //b is second smallest
            if (b <= c && b <= a) {
                Num2 = b;
                if (c <= a) {
                    Num3 = c;
                    Num4 = a;
                }else {
                    Num3 = a;
                    Num4 = c;
                }
            }
            // c is second smallest
            else if (c <= b && c <= a){
                Num2 = c;
                if (b <= a) {
                    Num3 = b;
                    Num4 = a;
                }else {
                    Num3 = a;
                    Num4 = b;
                }
            }
            // a is second smallest
            else if (a <= b && d <= c)
            {
                Num2 = a;
                if (b <= c) {
                    Num3 = b;
                    Num4 = c;
                }else {
                    Num3 = c;
                    Num4 = b;
                }
            }
        }  
        cout << "Ascending Order: " << Num1 << "," << Num2 << "," << Num3 << "," << Num4 << endl;
        cout << "Descending Order: " << Num4 << "," << Num3 << "," << Num2 << "," << Num1 << endl;  
        cout << "Do you want to try again? Press 0 to quit or 1 to try again: "<<endl;
        cin >> choice;
    } while (choice != 0);

    return 0;
}