#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullName, phoneNumber;

    cout << "Enter your full name: ";
    getline(cin, fullName);
    cout << "Enter your phone number: ";
    cin >> phoneNumber;

    cout << "------------------------------" << endl;
    cout << "Hello " << fullName << "!" << endl;
    cout << "Your registered phone number is: " << phoneNumber << endl;
    cout << "Welcome to our store!" << endl;
    return 0;
}
