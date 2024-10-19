#include <iostream>
using namespace std;

/*
Meal_ID  Meal_Name       Meal_PKR_Price
101      Chicken Karahi  1800
102      Chicken Tikka   2000
103      Chicken Haleem  2200
104      Creamy Chicken  2500
105      Chicken Handi   800
*/


int main() {
    float tax,taxed_bill;
    int choice,ch2;
    int 
    Chicken_Karahi = 1800,
    Chicken_Tikka =  2000,
    Chicken_Haleem = 2200,
    Creamy_Chicken =  2500,
    Chicken_Handi =  800,
    q,Total_bill;

    do
    {
        cout << "|=====================================|" << endl;
        cout << "|=======Welcome to UOL Cafe===========|" << endl;
        cout << "|Enter 101: to order a Chicken Karahi=|" << endl;
        cout << "|Enter 102: to order a Chicken Tikka==|" << endl;
        cout << "|Enter 103: to order a Chicken Haleem=|" << endl;
        cout << "|Enter 104: to order a Creamy Chicken=|" << endl;
        cout << "|Enter 105: to order a Chicken Handi==|" << endl;
        cout << "|Enter 0: to Quit program=============|" << endl;
        cout << "Please enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 101:
                cout<<"how many kg do you want: ";
                cin>>q;
                Total_bill = Chicken_Karahi * q;
                cout<<"do you want to pay by card or cash? enter 0 for card and 1 for cash: ";
                cin >> ch2;
                switch (ch2)
                {
                case 0:
                    tax = Total_bill * 15/100;
                    break;
                case 1:
                    tax = Total_bill * 5/100;
                    break;
                
                }
                cout<<"your total bill without taxes is: "<<Total_bill<<endl;
                cout<<"your total bill with taxes is: "<<Total_bill + tax<<endl;
                break;
        case 102:
                cout<<"how many kg do you want: ";
                cin>>q;
                Total_bill = Chicken_Tikka * q;
                cout<<"do you want to pay by card or cash? enter 0 for card and 1 for cash: ";
                cin >> ch2;
                switch (ch2)
                {
                case 0:
                    tax = Total_bill * 15/100;
                    break;
                case 1:
                    tax = Total_bill * 5/100;
                    break;
                
                }
                cout<<"your total bill without taxes is: "<<Total_bill<<endl;
                cout<<"your total bill with taxes is: "<<Total_bill + tax<<endl;
                break;
        case 103:
                cout<<"how many kg do you want: ";
                cin>>q;
                Total_bill = Chicken_Haleem * q;
                cout<<"do you want to pay by card or cash? enter 0 for card and 1 for cash: ";
                cin >> ch2;
                switch (ch2)
                {
                case 0:
                    tax = Total_bill * 15/100;
                    break;
                case 1:
                    tax = Total_bill * 5/100;
                    break;
                
                }
                cout<<"your total bill without taxes is: "<<Total_bill<<endl;
                cout<<"your total bill with taxes is: "<<Total_bill + tax<<endl;
                break;
        case 104:
                cout<<"how many kg do you want: ";
                cin>>q;
                Total_bill = Creamy_Chicken * q;
                cout<<"do you want to pay by card or cash? enter 0 for card and 1 for cash: ";
                cin >> ch2;
                switch (ch2)
                {
                case 0:
                    tax = Total_bill * 15/100;
                    break;
                case 1:
                    tax = Total_bill * 5/100;
                    break;
                }
                cout<<"your total bill without taxes is: "<<Total_bill<<endl;
                cout<<"your total bill with taxes is: "<<Total_bill + tax<<endl;
                break;
        case 105:
                cout<<"how many kg do you want: ";
                cin>>q;
                Total_bill = Chicken_Handi * q;
                cout<<"do you want to pay by card or cash? enter 0 for card and 1 for cash: ";
                cin >> ch2;
                switch (ch2)
                {
                case 0:
                    tax = Total_bill * 15/100;
                    break;
                case 1:
                    tax = Total_bill * 5/100;
                    break;
                }
                cout<<"your total bill without taxes is: "<<Total_bill<<endl;
                cout<<"your total bill with taxes is: "<<Total_bill + tax<<endl;
                break;
        }
        cout<<"do you want to order again? press 0 to quit and 1 to try again";
        cin>>choice;
    } while ( choice != 0);
      
    return 0;
}
// put tax out side the switch chk currency out side as well
// print the total and taxed outside too 
// only put the process in  switch statement
// to shorten the code
// the code should be less then 100 lines at most