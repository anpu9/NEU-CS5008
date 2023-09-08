#include <iostream>
#include <string>
using namespace std;

int main() {
    int number;
    char type;
    int minimum;
    int balance;
    cout << "please input your account number:" << endl;
    cin >> number;
    cout << "please input your account type:" << endl;
    cin >> type;
    cout << "please input your account minimum:" << endl;
    cin >> minimum;
    cout << "please input your account balance:" << endl;
    cin >> balance;
    double interest;
    double fee;
    
    if (balance < minimum) {
        fee = (type == 'c' || type == 'C') ? 25.0 : 10.0;
        cout << "Account Number: " << number << endl;
        cout << "Account Type: " << type << endl;
        cout << "Current Balance: $" << balance << endl;
        cout << "Service Charge: $" << fee << endl;
    } else {
        if (type == 'c' || type == 'C') {
            interest = (balance > (minimum + 5000)) ? ((balance - (minimum + 5000)) * 0.05 + (minimum + 5000) * 0.03) : balance * 0.03;
        } else {
            interest = balance * 0.04;
        }

        cout << "Account Number: " << number << endl;
        cout << "Account Type: " << type << endl;
        cout << "Current Balance: $" << balance << endl;
        cout << "Interest Earned: $" << interest << endl;
    }
    return 0;
}
