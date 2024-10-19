#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, Num1, Num2, Num3, Num4;

        cout << "Enter a 1st number: ";
        cin >> a;
        cout << "Enter a 2nd number: ";
        cin >> b;
        cout << "Enter a 3rd number: ";
        cin >> c;
        cout << "Enter a 4th number: ";
        cin >> d;

        if (a > b && a > c && a > d)
        {
            Num1 = a;
            if (b > c && b > d) {
                Num2 = b;
                if (c > d) {
                    Num3 = c;
                    Num4 = d;
                }else {
                    Num3 = d;
                    Num4 = c;
                }
            }
            else if (c > b && c > d){
                Num2 = c;
                if (b > d) {
                    Num3 = b;
                    Num4 = d;
                }else {
                    Num3 = d;
                    Num4 = b;
                }
            }
            else if (d > b && d > c)
            {
                Num2 = d;
                if (b > c) {
                    Num3 = b;
                    Num4 = c;
                }else {
                    Num3 = c;
                    Num4 = b;
                }
            }
        }
        else if (b > a && b > c && b > d)
        {
        Num1 = b;
            if (a > c && a > d) {
                Num2 = a;
                if (c > d) {
                    Num3 = c;
                    Num4 = d;
                }else {
                    Num3 = d;
                    Num4 = c;
                }
            }
            else if (c > a && c > d){
                Num2 = c;
                if (a > d) {
                    Num3 = a;
                    Num4 = d;
                }else {
                    Num3 = d;
                    Num4 = a;
                }
            }
            else if (d > a && d > c)
            {
                Num2 = d;
                if (a > c) {
                    Num3 = a;
                    Num4 = c;
                }else {
                    Num3 = c;
                    Num4 = a;
                }
            }
        }
        else if (c > a && c > b && c > d)
        {
            Num1 = c;
            if (b > a && b > d) {
                Num2 = b;
                if (a > d) {
                    Num3 = a;
                    Num4 = d;
                }else {
                    Num3 = d;
                    Num4 = a;
                }
            }
            else if (a > b && a > d){
                Num2 = a;
                if (b > d) {
                    Num3 = b;
                    Num4 = d;
                }else {
                    Num3 = d;
                    Num4 = b;
                }
            }
            else if (d > b && d > a)
            {
                Num2 = d;
                if (b > a) {
                    Num3 = b;
                    Num4 = a;
                }else {
                    Num3 = a;
                    Num4 = b;
                }
            }
        }
        else if(d > a && d > b && d > c){
            Num1 = d;
            
            if (b > c && b > a) {
                Num2 = b;
                if (c > a) {
                    Num3 = c;
                    Num4 = a;
                }else {
                    Num3 = a;
                    Num4 = c;
                }
            }
            else if (c > b && c > a){
                Num2 = c;
                if (b > a) {
                    Num3 = b;
                    Num4 = a;
                }else {
                    Num3 = a;
                    Num4 = b;
                }
            }
            else if (a > b && d > c)
            {
                Num2 = a;
                if (b > c) {
                    Num3 = b;
                    Num4 = c;
                }else {
                    Num3 = c;
                    Num4 = b;
                }
            }
        }  
        cout << "Descending Order: " << Num1 << "\t" << Num2 << "\t" << Num3 << "\t" << Num4 << endl;
        cout << "Ascending Order:  " << Num4 << "\t" << Num3 << "\t" << Num2 << "\t" << Num1 << endl;  
        
    return 0;
}