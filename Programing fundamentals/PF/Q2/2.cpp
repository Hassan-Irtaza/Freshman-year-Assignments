#include <iostream>
using namespace std;


double calculateTotalBill(int quantity, int price) {
    return quantity * price;
}


double calculateTax(double totalBill, int paymentMethod) {
    double taxRate = (paymentMethod == 1) ? 0.05 : 0.15;
    return totalBill * taxRate;
}

void displayBill(double totalBill, double tax, char currencySymbol) {
    cout << "|==================================================================|" << endl;
    cout << "|Your total bill without taxes is: " << totalBill << currencySymbol << "============================|" << endl;
    cout << "|Your total bill with taxes is: " << totalBill + tax << currencySymbol << "===============================|" << endl;
    cout << "|==================================================================|" << endl;
}

int main() {
    int choice, quantity, paymentMethod,currency;
    double tax, totalBill;

    const int Chicken_Karahi = 1800;
    const int Chicken_Tikka = 2000;
    const int Chicken_Haleem = 2200;
    const int Creamy_Chicken = 2500;
    const int Chicken_Handi = 800;

    do {
        cout << "|========================================================|" << endl;
        cout << "|=======Welcome to UOL Cafe==============================|" << endl;
        cout << "|Enter 101: to order a Chicken Karahi========1800Rs======|" << endl;
        cout << "|Enter 102: to order a Chicken Tikka=========2000Rs======|" << endl;
        cout << "|Enter 103: to order a Chicken Haleem========2200Rs======|" << endl;
        cout << "|Enter 104: to order a Creamy Chicken========2500Rs======|" << endl;
        cout << "|Enter 105: to order a Chicken Handi=========800Rs=======|" << endl;
        cout << "|Enter 0: to Quit program================================|" << endl;
        cout << "|========================================================|" << endl;

        cin >> choice;

        switch (choice) {
            case 101:
                cout << "how many kg do you want: ";
                cin >> quantity;
                totalBill = calculateTotalBill(quantity, Chicken_Karahi);
                break;
            case 102:
                cout << "how many kg do you want: ";
                cin >> quantity;
                totalBill = calculateTotalBill(quantity, Chicken_Tikka);
                break;
            case 103:
                cout << "how many kg do you want: ";
                cin >> quantity;
                totalBill = calculateTotalBill(quantity, Chicken_Haleem);
                break;
            case 104:
                cout << "how many kg do you want: ";
                cin >> quantity;
                totalBill = calculateTotalBill(quantity, Creamy_Chicken);
                break;
            case 105:
                cout << "how many kg do you want: ";
                cin >> quantity;
                totalBill = calculateTotalBill(quantity, Chicken_Handi);
                break;
        }

        cout << "|=====================================|" << endl;
        cout << "|How would you like to pay?===========|" << endl;
        cout << "|Enter 1: Dollars=====================|" << endl;
        cout << "|Enter 2: Euros=======================|" << endl;
        cout << "|Enter 3: Rupees======================|" << endl;
        cout << "|=====================================|" << endl;

        cin >> currency;

        switch (currency) {
            case 1:
                totalBill /= 165;
                break;
            case 2:
                totalBill /= 193;
                break;
            case 3:
                break;
            default:
                break;
        }

        cout << "|Do you want to pay by card or cash? enter 1 for card and 2 for cash: ====|" << endl;
        cin >> paymentMethod;

        tax = calculateTax(totalBill, paymentMethod);

        switch (currency) {
            case 1:
                displayBill(totalBill, tax, '$');
                break;
            case 2:
                displayBill(totalBill, tax, '$'); 
                break;
            case 3:
                displayBill(totalBill, tax, 'R');
                break;
        }

        cout << "|Do you want to order again? Press 0 to quit and 1 to try again====|" << endl;
        cout << "|==================================================================|" << endl;
        cin >> choice;

    } while (choice != 0);

    return 0;
}
