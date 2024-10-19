#include <iostream>
using namespace std;

int main() {
    double tax,Total_bill;
    int choice,tax_type,currency;
    int 
    Chicken_Karahi = 1800,
    Chicken_Tikka =  2000,
    Chicken_Haleem = 2200,
    Creamy_Chicken =  2500,
    Chicken_Handi =  800,
    q;
    
    do
    {
        cout << "|========================================================================|" << endl;
        cout << "|=======Welcome to UOL Cafe==============================================|" << endl;
        cout << "|Enter 101: to order a Chicken Karahi========1800Rs======================|" << endl;
        cout << "|Enter 102: to order a Chicken Tikka=========2000Rs======================|" << endl;
        cout << "|Enter 103: to order a Chicken Haleem========2200Rs======================|" << endl;
        cout << "|Enter 104: to order a Creamy Chicken========2500Rs======================|" << endl;
        cout << "|Enter 105: to order a Chicken Handi=========800Rs=======================|" << endl;
        cout << "|Enter 0: to Quit program================================================|" << endl;
        cout << "|========================================================================|" << endl;
        cin >> choice;
        switch (choice)
        {
        case 101:
                cout << "|how many kg do you want?================================================|"<<endl;
                cin>>q;
                Total_bill = Chicken_Karahi * q;
                break;
        case 102:
                cout << "|how many kg do you want?================================================|"<<endl;
                cin>>q;
                Total_bill = Chicken_Tikka * q;
                break;
        case 103:
                cout << "|how many kg do you want?================================================|"<<endl;
                cin>>q;
                Total_bill = Chicken_Haleem * q;
                break;
        case 104:
                cout << "|how many kg do you want?================================================|"<<endl;
                cin>>q;
                Total_bill = Creamy_Chicken * q;
                break;
        case 105:
                cout << "|how many kg do you want?================================================|"<<endl;
                cin>>q;
                Total_bill = Chicken_Handi * q;
                break;
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
            Total_bill = Total_bill / 165 ;
            cout<<"|Do you want to pay by card or cash? enter 1 for card and 2 for cash:====|"<<endl;
            cin >> tax_type;
            switch (tax_type)
            {
            case 1:
                tax = Total_bill * 5/100;
                break;
            case 2:
                tax = Total_bill * 15/100;
                break;
            }
            cout << "|========================================================================|" << endl;
            cout << "|Your total bill without taxes is: " <<Total_bill<<"$"<<"==============================|"<<endl;
            cout << "|Your total bill with taxes is: " <<Total_bill + tax<<"$"<<"=================================|"<<endl;
            cout << "|========================================================================|" << endl;
            break;
        case 2:
            Total_bill = Total_bill / 193 ;
            cout<<"|Do you want to pay by card or cash? enter 1 for card and 2 for cash:====|"<<endl;
            cin >> tax_type;
            switch (tax_type)
            {
            case 1:
                tax = Total_bill * 5/100;
                break;
            case 2:
                tax = Total_bill * 15/100;
                break;
            }
            cout << "|========================================================================|" << endl;
            cout << "|Your total bill without taxes is: " <<Total_bill<<"€"<<"==============================|"<<endl;
            cout << "|Your total bill with taxes is: " <<Total_bill + tax<<"€"<<"==================================|"<<endl;
            cout << "|========================================================================|" << endl;
            break;
        case 3:
            cout<<"|Do you want to pay by card or cash? enter 1 for card and 2 for cash:====|"<<endl;
            cin >> tax_type;
            switch (tax_type)
            {
            case 1:
                tax = Total_bill * 5/100;
                break;
            case 2:
                tax = Total_bill * 15/100;
                break;
            }
            cout << "|========================================================================|" << endl;
            cout << "|Your total bill without taxes is: " <<Total_bill<<"==================================|"<<endl;
            cout << "|Your total bill with taxes is: " <<Total_bill + tax<<"=====================================|"<<endl;
            cout << "|========================================================================|" << endl;
            break;
        }
        cout << "|Do you want to order again? Press 0 to quit and 1 to try again==========|"<<endl;
        cout << "|========================================================================|" << endl;
        cin>>choice;
    } while ( choice != 0);
      
    return 0;
}

