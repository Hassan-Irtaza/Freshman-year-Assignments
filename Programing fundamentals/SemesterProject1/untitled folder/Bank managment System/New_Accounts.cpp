#include <iostream>
#include <string>
#include <vector>

using namespace std;

int numNewAccounts = 0;

struct Account
{
    int id;
    string password;
    string accountType;
    double balance;
};

void displayMenu();
void createAccount(vector<Account> &accounts);
void modifyAccount(vector<Account> &accounts);
void deleteAccount(vector<Account> &accounts);
void deposit(vector<Account> &accounts, int id, double amount);
void withdraw(vector<Account> &accounts, int id, double amount);
void loan(vector<Account> &accounts, int id, double amount);

int main()
{
    vector<Account> accounts;

    displayMenu();
    createAccount();
    return 0;
}

void displayMenu()
{
    cout << "Bank Management System Menu" << endl;
    cout << "1. Create Account" << endl;
    cout << "2. Modify Account" << endl;
    cout << "3. Delete Account" << endl;
    cout << "4. Deposit" << endl;
    cout << "5. Withdraw" << endl;
    cout << "6. Loan" << endl;
    cout << "7. Exit" << endl;
}

void createAccount(vector<Account> &accounts)
{
    Account newAccount;
    cout << "Enter ID for the new account: ";
    cin >> newAccount.id;

    cout << "Enter password for the new account: ";
    cin >> newAccount.password;

    cout << "Enter account type (savings or current): ";
    cin >> newAccount.accountType;

    // Set initial balance to 0
    newAccount.balance = 0.0;

    // Add the new account to the accounts vector
    accounts.push_back(newAccount);

    // Increment the counter for new accounts
    numNewAccounts++;

    cout << "Account created successfully!" << endl;
}

void modifyAccount(vector<Account> &accounts)
{
    // Implementation here
}

void deleteAccount(vector<Account> &accounts)
{
    // Implementation here
}

void deposit(vector<Account> &accounts, int id, double amount)
{
    // Implementation here
}

void withdraw(vector<Account> &accounts, int id, double amount)
{
    // Implementation here
}

void loan(vector<Account> &accounts, int id, double amount)
{
    // Implementation here
}
