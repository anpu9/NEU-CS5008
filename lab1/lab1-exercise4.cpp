#include <iostream>
using namespace std;

int main() {
    const double SAVE_CHARGE = 10;
    const double CHECKING_CHARGE = 25;
    const double SAVE_INTEREST = 0.04;
    const double CHECKING_CHARGE_LOW = 0.03;
    const double CHECKING_CHARGE_HIGH = 0.05;
    const double CHECKING_LOW_LIMIT = 5000;
    int number;
    char type;
    double minimum;
    double balance;
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
        fee = (type == 'c' || type == 'C') ? CHECKING_CHARGE : SAVE_CHARGE;
        cout << "Account Number: " << number << endl;
        cout << "Account Type: " << type << endl;
        cout << "Current Balance: $" << balance << endl;
        cout << "Service Charge: $" << fee << endl;
    } else {
        if (type == 'c' || type == 'C') {
            interest = (balance > (minimum + CHECKING_LOW_LIMIT)) ?
                    ((balance - (minimum + CHECKING_LOW_LIMIT)) * CHECKING_CHARGE_HIGH + (minimum + 5000) * CHECKING_CHARGE_LOW)
                    : balance * CHECKING_LOW_LIMIT;

        } else {
            interest = balance * SAVE_INTEREST;
        }
        cout << "Account Number: " << number << endl;
        cout << "Account Type: " << type << endl;
        cout << "Current Balance: $" << balance << endl;
        cout << "Interest Earned: $" << interest << endl;
    }
    return 0;
}
