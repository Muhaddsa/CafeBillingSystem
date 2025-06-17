#include <iostream>
using namespace std;

int main() {
  
    string name; 
    string vuID;
    cout <<"Enter your name:   " << endl;
    getline(cin,name);
    cout <<"Enter your VuID:   " << endl;
    cin >> vuID;

    string numericPart;
    cout << "Enter numeric part of VU-ID: ";
    cin >> numericPart;

    string middleFive = numericPart.substr(2, 5);
    cout << "Extracted Middle Five Digits: " << middleFive << endl;

    // Prices
    int priceBurger = 250;
    int pricePizza = 500;
    int priceFries = 150;
    int priceSandwich = 200;
    int priceDrink = 100;

    // Quantities
    int qtyBurger = middleFive[0] - '0';
    int qtyPizza = middleFive[1] - '0';
    int qtyFries = middleFive[2] - '0';
    int qtySandwich = middleFive[3] - '0';
    int qtyDrink = middleFive[4] - '0';

    // Subtotals
    int subBurger = qtyBurger * priceBurger;
    int subPizza = qtyPizza * pricePizza;
    int subFries = qtyFries * priceFries;
    int subSandwich = qtySandwich * priceSandwich;
    int subDrink = qtyDrink * priceDrink;

    // Total
    int total = subBurger + subPizza + subFries + subSandwich + subDrink;

    cout << "\n=== Welcome to C++ Cafe ===" << endl;
    cout << "------ MENU ------" << endl;
    cout << "1. Burger     - Rs. " << priceBurger << endl;
    cout << "2. Pizza      - Rs. " << pricePizza << endl;
    cout << "3. Fries      - Rs. " << priceFries << endl;
    cout << "4. Sandwich   - Rs. " << priceSandwich << endl;
    cout << "5. Cold Drink - Rs. " << priceDrink << endl;

    cout << "\nBurger (" << qtyBurger << " x Rs. " << priceBurger << ") = Rs. " << subBurger << endl;
    cout << "Pizza (" << qtyPizza << " x Rs. " << pricePizza << ") = Rs. " << subPizza << endl;
    cout << "Fries (" << qtyFries << " x Rs. " << priceFries << ") = Rs. " << subFries << endl;
    cout << "Sandwich (" << qtySandwich << " x Rs. " << priceSandwich << ") = Rs. " << subSandwich << endl;
    cout << "Cold Drink (" << qtyDrink << " x Rs. " << priceDrink << ") = Rs. " << subDrink << endl;

    double discount = 0.0;
    if (total >= 5000) {
        discount = total * 0.10;
        cout << "\nSurprise! You've unlocked a 10% discount" << endl;
    }

    double netPayable = total - discount;

    cout << "\n==== Final Bill ====" << endl;
    cout << "Total before discount: Rs. " << total << endl;
    cout << "Discount: Rs. " << discount << endl;
    cout << "Net Payable Amount: Rs. " << netPayable << endl;

    cout << "\nThank you for visiting C++ Cafe!" << endl;

    return 0;
}
