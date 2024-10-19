#include <iostream>
using namespace std;

int main()
{
    double tax, Total_bill, taxed_bill;
    int choice, tax_type, currency, a, temp = 0;
    int
        Chicken_Karahi = 1800,
        Chicken_Tikka = 2000,
        Chicken_Haleem = 2200,
        Creamy_Chicken = 2500,
        Chicken_Handi = 800,
        quantity;

    do
    {

        cout << "|========================================================================|" << endl;
        cout << "|=======================Welcome to UOL Cafe==============================|" << endl;
        cout << "|Enter 1: to order a Chicken Karahi========1800Rs========================|" << endl;
        cout << "|Enter 2: to order a Chicken Tikka=========2000Rs========================|" << endl;
        cout << "|Enter 3: to order a Chicken Haleem========2200Rs========================|" << endl;
        cout << "|Enter 4: to order a Creamy Chicken========2500Rs========================|" << endl;
        cout << "|Enter 5: to order a Chicken Handi=========800Rs=========================|" << endl;
        cout << "|Enter 0: to Quit program================================================|" << endl;
        cout << "|========================================================================|" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "|how many kg do you want?================================================|" << endl;
            cin >> quantity;
            while (quantity <= 0)
            {
                cout << "|==============The input was invalid please try again====================|" << endl;
                cin >> quantity;
            }

            Total_bill = Chicken_Karahi * quantity;
            temp = Total_bill;
            Total_bill += temp;

            cout << "Press 1 to purchase more items? or any other key to continue=============|" << endl;
            cin >> a;
            if (a == 1)
            {
                continue;
            }
            break;
        case 2:
            cout << "|how many kg do you want?================================================|" << endl;
            cin >> quantity;
            while (quantity <= 0)
            {
                cout << "|==============The input was invalid please try again====================|" << endl;
                cin >> quantity;
            }
            Total_bill = Chicken_Tikka * quantity;
            temp = Total_bill;
            Total_bill += temp;
            cout << "Press 1 to purchase more items?  or any other key to continue=============|" << endl;
            cin >> a;
            if (a == 1)
            {
                continue;
            }
            break;
        case 3:
            cout << "|how many kg do you want?================================================|" << endl;
            cin >> quantity;
            while (quantity <= 0)
            {
                cout << "|==============The input was invalid please try again====================|" << endl;
                cin >> quantity;
            }
            Total_bill = Chicken_Haleem * quantity;
            temp = Total_bill;
            Total_bill += temp;
            cout << "Press 1 to purchase more items?  or any other key to continue=============|" << endl;
            cin >> a;
            if (a == 1)
            {
                continue;
            }
            break;
        case 4:
            cout << "|how many kg do you want?================================================|" << endl;
            cin >> quantity;
            while (quantity <= 0)
            {
                cout << "|==============The input was invalid please try again====================|" << endl;
                cin >> quantity;
            }
            Total_bill = Creamy_Chicken * quantity;
            temp = Total_bill;
            Total_bill += temp;
            cout << "Press 1 to purchase more items?  or any other key to continue=============|" << endl;
            cin >> a;
            if (a == 1)
            {
                continue;
            }
            break;
        case 5:
            cout << "|how many kg do you want?================================================|" << endl;
            cin >> quantity;
            while (quantity <= 0)
            {
                cout << "|==============The input was invalid please try again====================|" << endl;
                cin >> quantity;
            }
            Total_bill = Chicken_Handi * quantity;
            temp = Total_bill;
            Total_bill += temp;
            cout << "Press 1 to purchase more items?  or any other key to continue=============|" << endl;
            cin >> a;
            if (a == 1)
            {
                continue;
            }
            break;
        default:
            cout << "|==============The input was invalid please try again====================|" << endl;
            continue;
        }
        if (Total_bill > 3000)
        {
            tax = Total_bill * 5 / 100;
            taxed_bill = Total_bill + tax;
        }
        else if (Total_bill <= 3000 && Total_bill > 1000)
        {
            tax = Total_bill * 2 / 100;
            taxed_bill = Total_bill + tax;
        }
        else
        {
            taxed_bill = Total_bill;
        }
        cout << "|========================================================================|" << endl;
        cout << "|How would you like to pay?==============================================|" << endl;
        cout << "|Enter 1: Dollars========================================================|" << endl;
        cout << "|Enter 2: Euros==========================================================|" << endl;
        cout << "|Enter 3: Rupees=========================================================|" << endl;
        cout << "|========================================================================|" << endl;
        cin >> currency;

        switch (currency)
        {
        case 1:
            Total_bill /= 165;
            taxed_bill /= 165;
            tax /= 165;
            cout << "|=====================Thank you for the purchase=========================|" << endl;
            cout << "|Your total bill without taxes is: " << Total_bill << "$"
                 << "==============================|" << endl;
            cout << "|Your total bill with taxes is: " << taxed_bill << "$"
                 << "=================================|" << endl;
            cout << "|Your total taxes are: " << tax << "$"
                 << "==========================================|" << endl;
            cout << "|========================================================================|" << endl;
            break;
        case 2:
            Total_bill /= 193;
            taxed_bill /= 193;
            tax /= 193;
            cout << "|=====================Thank you for the purchase=========================|" << endl;
            cout << "|Your total bill without taxes is: " << Total_bill << "Eu"
                 << "=============================|" << endl;
            cout << "|Your total bill with taxes is: " << taxed_bill << "Eu"
                 << "=================================|" << endl;
            cout << "|Your total taxes are: " << tax << "Eu"
                 << "=============================================|" << endl;
            cout << "|========================================================================|" << endl;
            break;
        case 3:
            cout << "|=====================Thank you for the purchase=========================|" << endl;
            cout << "|Your total bill without taxes is: " << Total_bill << "Rs"
                 << "================================|" << endl;
            cout << "|Your total bill with taxes is: " << taxed_bill << "Rs"
                 << "===================================|" << endl;
            cout << "|Your total taxes are: " << tax << "Rs"
                 << "=============================================|" << endl;
            cout << "|========================================================================|" << endl;
            break;
        default:
            cout << "|==============The input was invalid please try again====================|" << endl;
            continue;
        }
        cout << "|Do you want to order again? Press 0 to Quit and 1 to try again==========|" << endl;
        cout << "|========================================================================|" << endl;
        cin >> choice;

    } while (choice != 0);

    return 0;
}
