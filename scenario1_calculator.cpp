#include <iostream>
using namespace std;

int main() {
    double num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "------------------------------" << endl;
    cout << "Plus (+): " << num1 + num2 << endl;
    cout << "Minus (-): " << num1 - num2 << endl;
    cout << "Multiply (*): " << num1 * num2 << endl;

    if (num2 != 0) {
        cout << "Divide (/): " << num1 / num2 << endl;
    } else {
        cout << "Divide (/): Cannot divide by zero." << endl;
    }
    return 0;
}
