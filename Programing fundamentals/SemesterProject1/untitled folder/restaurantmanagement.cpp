#include <iostream>
using namespace std;

int main() {
    float tax,taxed_bill;
    int choice,ch2;
    int 
    shami_burger = 250, 
    zinger_burger = 350,
    simple_burger = 200, 
    fajita_pizza = 600,
    supreme_pizza = 700,
    bbq_pizza = 500,
    simple_fries = 100,
    spicy_fries = 100,
    saucy_fries = 100,
    q,gross_bill;

    do
    {
        cout << "|-----------------------------------|" << endl;
        cout << "|-------welcome to UOL Cafe---------|" << endl;
        cout << "|Enter 1: to order a burger---------|" << endl;
        cout << "|Enter 2: to order a pizza----------|" << endl;
        cout << "|Enter 3: to order a fries----------|" << endl;
        cout << "|Enter 0: to Quit program-----------|" << endl;
        cout << "Please enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        do
        {
        
            cout << "|-----------------------------------|" << endl;
            cout << "|-------welcome to UOL Cafe---------|" << endl;
            cout << "|Enter 1: to order a shami burger---|" << endl;
            cout << "|Enter 2: to order a zinger burger--|" << endl;
            cout << "|Enter 3: to order a fries----------|" << endl;
            cout << "|Enter 0: to Quit program-----------|" << endl;
            cout << "Please enter your choice: ";
            cin >> ch2;
            switch (ch2)
            {
            case 1:
                cout<<"how many do you want: ";
                cin>>q;
                gross_bill = shami_burger * q;
                tax = gross_bill * 5/100;
                cout<<"your total bill without taxes is: "<<gross_bill<<endl;
                cout<<"your total bill with taxes is: "<<gross_bill + tax<<endl;
                break;
            case 2:
                cout<<"how many do you want: ";
                cin>>q;
                gross_bill = zinger_burger * q;
                tax = gross_bill * 5/100;
                cout<<"your total bill without taxes is: "<<gross_bill<<endl;
                cout<<"your total bill with taxes is: "<<gross_bill + tax<<endl;
                break;
            case 3:
                cout<<"how many do you want: ";
                cin>>q;
                gross_bill = simple_burger * q;
                tax = gross_bill * 5/100;
                cout<<"your total bill without taxes is: "<<gross_bill<<endl;
                cout<<"your total bill with taxes is: "<<gross_bill + tax<<endl;
                break;

            default:
                cout<<"Enter a valid number: "<<endl;
                break;
            }
                
        } while (ch2 != 0);
        break;
        case 2:
        do
        {
            cout << "|-----------------------------------|" << endl;
            cout << "|-------welcome to UOL Cafe---------|" << endl;
            cout << "|Enter 1: to order a shami burger---|" << endl;
            cout << "|Enter 2: to order a zinger burger--|" << endl;
            cout << "|Enter 3: to order a fries----------|" << endl;
            cout << "|Enter 0: to Quit program-----------|" << endl;
            cout << "Please enter your choice: ";
            cin >> ch2;
            switch (ch2)
            {
            case 1:
                cout<<"how many do you want: ";
                cin>>q;
                gross_bill = bbq_pizza * q;
                tax = gross_bill * 5/100;
                cout<<"your total bill without taxes is: "<<gross_bill<<endl;
                cout<<"your total bill with taxes is: "<<gross_bill + tax<<endl;
                break;
            case 2:
                cout<<"how many do you want: ";
                cin>>q;
                gross_bill = fajita_pizza * q;
                tax = gross_bill * 5/100;
                cout<<"your total bill without taxes is: "<<gross_bill<<endl;
                cout<<"your total bill with taxes is: "<<gross_bill + tax<<endl;
                break;
            case 3:
                cout<<"how many do you want: ";
                cin>>q;
                gross_bill = supreme_pizza * q;
                tax = gross_bill * 5/100;
                cout<<"your total bill without taxes is: "<<gross_bill<<endl;
                cout<<"your total bill with taxes is: "<<gross_bill + tax<<endl;
                break;

            default:
                cout<<"Enter a valid number: "<<endl;
                break;
            }
        } while (ch2 != 0);
        break;
        case 3:
        do
        {
            cout << "|-----------------------------------|" << endl;
            cout << "|-------welcome to UOL Cafe---------|" << endl;
            cout << "|Enter 1: to order a shami burger---|" << endl;
            cout << "|Enter 2: to order a zinger burger--|" << endl;
            cout << "|Enter 3: to order a fries----------|" << endl;
            cout << "|Enter 0: to Quit program-----------|" << endl;
            cout << "Please enter your choice: ";
            cin >> ch2;
            switch (ch2)
            {
            case 1:
                cout<<"how many do you want: ";
                cin>>q;
                gross_bill = simple_fries * q;
                tax = gross_bill * 5/100;
                cout<<"your total bill without taxes is: "<<gross_bill<<endl;
                cout<<"your total bill with taxes is: "<<gross_bill + tax<<endl;
                break;
            case 2:
                cout<<"how many do you want: ";
                cin>>q;
                gross_bill = spicy_fries * q;
                tax = gross_bill * 5/100;
                cout<<"your total bill without taxes is: "<<gross_bill<<endl;
                cout<<"your total bill with taxes is: "<<gross_bill + tax<<endl;
                break;
            case 3:
                cout<<"how many do you want: ";
                cin>>q;
                gross_bill = saucy_fries * q;
                tax = gross_bill * 5/100;
                cout<<"your total bill without taxes is: "<<gross_bill<<endl;
                cout<<"your total bill with taxes is: "<<gross_bill + tax<<endl;
                break;
            default:
                cout<<"Enter a valid number: "<<endl;
                break;
            }
        } while (ch2 != 0);
        break;
        
        default:
            cout<<"Enter a valid number: "<<endl;
            break;
        }

    } while (choice != 0);
    return 0;
}