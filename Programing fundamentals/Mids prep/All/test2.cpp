#include <iostream>
using namespace std;

int main()
{
    double principalAmount, interestRate;
    int timePeriod;

    // Input principal amount
    cout << "Enter the principal amount: ";
    cin >> principalAmount;

    // Validate principal amount
    while (principalAmount <= 0)
    {
        cout << "Principal amount should be positive. Please enter a valid amount: ";
        cin >> principalAmount;
    }

    // Input interest rate
    cout << "Enter the interest rate (%): ";
    cin >> interestRate;

    // Validate interest rate
    while (interestRate < 0)
    {
        cout << "Interest rate should be non-negative. Please enter a valid rate: ";
        cin >> interestRate;
    }

    // Input time period
    cout << "Enter the time period (in years): ";
    cin >> timePeriod;

    // Validate time period
    while (timePeriod <= 0)
    {
        cout << "Time period should be a positive integer. Please enter a valid period: ";
        cin >> timePeriod;
    }

    // Calculate and display simple interest for each year
    double simpleInterest = 0;
    for (int year = 1; year <= timePeriod; ++year)
    {
        simpleInterest = (principalAmount * interestRate * year) / 100;
        cout << "Simple interest for year " << year << ": " << simpleInterest << endl;
    }

    // Display total interest earned at the end of the time period
    cout << "Total interest earned at the end of " << timePeriod << " years: " << simpleInterest << endl;

    return 0;
}
