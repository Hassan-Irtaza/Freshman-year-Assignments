#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, n1, n2, n3, n4, choice;

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
        if (a < b && a < c && a < d)
        {
            n1 = a;
            // b is 2nd smallest
            if (b < c && b < d) {
                n2 = b;
                if (c < d) {
                    n3 = c;
                    n4 = d;
                }else {
                    n3 = d;
                    n4 = c;
                }
            }
            // c is second smallest
            else if (c < b && c < d){
                n2 = c;
                if (b < d) {
                    n3 = b;
                    n4 = d;
                }else {
                    n3 = d;
                    n4 = b;
                }
            }
            // d is second smalest
            else if (d < b && d < c)
            {
                n2 = d;
                if (b < c) {
                    n3 = b;
                    n4 = c;
                }else {
                    n3 = c;
                    n4 = b;
                }
            }
        }
    // b is smallest
        else if (b < a && b < c && b < d)
        {
        n1 = b;
            // a is second smallest
            if (a < c && a < d) {
                n2 = a;
                if (c < d) {
                    n3 = c;
                    n4 = d;
                }else {
                    n3 = d;
                    n4 = c;
                }
            }
            // c is second smallest
            else if (c < a && c < d){
                n2 = c;
                if (a < d) {
                    n3 = a;
                    n4 = d;
                }else {
                    n3 = d;
                    n4 = a;
                }
            }
            // d is second smalest
            else if (d < a && d < c)
            {
                n2 = d;
                if (a < c) {
                    n3 = a;
                    n4 = c;
                }else {
                    n3 = c;
                    n4 = a;
                }
            }
        }
    // c is the smal;est
        else if (c < a && c < b && c < d)
        {
            n1 = c;
            // b is second smallest
            if (b < a && b < d) {
                n2 = b;
                if (a < d) {
                    n3 = a;
                    n4 = d;
                }else {
                    n3 = d;
                    n4 = a;
                }
            }
            // a is second smallest
            else if (a < b && a < d){
                n2 = a;
                if (b < d) {
                    n3 = b;
                    n4 = d;
                }else {
                    n3 = d;
                    n4 = b;
                }
            }
            // d is second smalest
            else if (d < b && d < a)
            {
                n2 = d;
                if (b < a) {
                    n3 = b;
                    n4 = a;
                }else {
                    n3 = a;
                    n4 = b;
                }
            }
        }
    // d is the smalest
        else if(d < a && d < b && d < c){
            n1 = d;
            //b is second smallest
            if (b < c && b < a) {
                n2 = b;
                if (c < a) {
                    n3 = c;
                    n4 = a;
                }else {
                    n3 = a;
                    n4 = c;
                }
            }
            // c is second smallest
            else if (c < b && c < a){
                n2 = c;
                if (b < a) {
                    n3 = b;
                    n4 = a;
                }else {
                    n3 = a;
                    n4 = b;
                }
            }
            // a is second smalest
            else if (a < b && d < c)
            {
                n2 = a;
                if (b < c) {
                    n3 = b;
                    n4 = c;
                }else {
                    n3 = c;
                    n4 = b;
                }
            }
        }  

        cout << "Ascending Order: " << n1 << "," << n2 << "," << n3 << "," << n4 << endl;
        cout << "Descending Order: " << n4 << "," << n3 << "," << n2 << "," << n1 << endl;  
        cout << "Do you want to try again? Press 0 to quit or 1 to try again: "<<endl;
        cin >> choice;
    } while (choice != 0);

    return 0;
}