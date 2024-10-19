#include <iostream>
#include <iomanip>
using namespace std;

typedef struct bank_Acc
{
    string id;
    string password;
    double balance;
    double credit;
} ba;

void display()
{
    cout << "|        " << "Welcome to the National Bank of Punjab" << endl;
    cout << "|               " << "Pakistans largest Bank" << endl;
}

int main()
{
    string acc_name, password;
    int deposit, withdraw;
    // display();
    // cout << "Enter the account name: ";
    // cin >> acc_name;
    // cout << "Enter the account password: ";
    // cin >> password;

    return 0;
}

/*
bank management
-display
-id
-password
-account type
 -savings
 -current
-ask the operations{use recursive functions}
 -deposit
 -withdraw
 -loan

create account()
modify account()
delete account()
*/
