#include <iostream>
#include <string>
using namespace std;

int main() {
    const double pricePerBag = 100.0;
    const double discountRate = 0.20;
    string customerName, phoneNumber;
    int quantity;
    double totalBeforeDiscount, finalTotal;

    cout << "=== SUPERMARKET SPECIAL OFFER ===" << endl;
    cout << "Item: Basmati Rice (Unit Price: 100 EGP)" << endl;
    cout << "* SPECIAL DEAL: GET 20% DISCOUNT ON YOUR TOTAL ORDER! *" << endl;

    cout << "Enter your name: ";
    getline(cin, customerName);
    cout << "Enter your phone number: ";
    cin >> phoneNumber;
    cout << "Enter quantity (bags): ";
    cin >> quantity;

    totalBeforeDiscount = pricePerBag * quantity;
    finalTotal = totalBeforeDiscount * (1 - discountRate);

    cout << "\\n=== OFFICIAL INVOICE ===" << endl;
    cout << "Customer Name: " << customerName << endl;
    cout << "Phone Number: " << phoneNumber << endl;
    cout << "Quantity Purchased: " << quantity << " bags" << endl;
    cout << "Total Price Before Discount: " << totalBeforeDiscount << " EGP" << endl;
    cout << "Total Price After 20% Discount: " << finalTotal << " EGP" << endl;
    cout << "\\nThank you for shopping with us. Goodbye!" << endl;
    return 0;
}
