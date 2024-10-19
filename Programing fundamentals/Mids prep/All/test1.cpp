#include <iostream>
using namespace std;

int main()
{
    double bill, total_bill, tip;
    cout << "enter your bill amount: ";
    cin >> bill;
    while (bill < 0)
    {
        cout << "enter your bill amount: ";
        cin >> bill;
    }

    cout << "enter your tip percetage amount: ";
    cin >> tip;
    while (tip < 0)
    {
        cout << "enter your tip percetage amount: ";
        cin >> tip;
    }

    total_bill = bill + (bill * (tip / 100));
    cout << "your total bill is: " << total_bill << endl;

    return 0;
}