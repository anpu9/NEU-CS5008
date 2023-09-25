#include <iostream>
#include <iomanip>

using namespace std;

/**
 * Calculate the billing amount for a consulting service.
 *
 * @param rate - Hourly rate for the consulting service.
 * @param mins - Total consulting time in minutes.
 * @param income - The income of the client.
 *
 * @return The billing amount based on rate, mins, and income.
 */
double bill(double rate, double mins, double income);

int main() {
    double rate, mins, income;
    cout << "Enter your income: ";
    cin >> income;

    cout << "Enter the hourly rate: ";
    cin >> rate;

    cout << "Enter the total consulting time in minutes: ";
    cin >> mins;

    cout << "Your billing amount: " << fixed << setprecision(2) << bill(rate, mins, income) << endl;
    return 0;
}

double bill(double rate, double mins, double income) {
    const double LOWINCOME = 25000;
    const double LOWINCOME_MIN = 30;
    const double LOWINCOME_OVERTIME_CHARGE = 0.4;
    const double REGULAR_MIN = 20;
    const double REGULAR_OVERTIME_CHARGE = 0.7;
    double bill = 0;
    // determine if the client fall into low income group
    bool isLowIncome = income <= LOWINCOME;

    if (isLowIncome) {
        // Calculate billing for low-income clients.
        if (mins > LOWINCOME_MIN) {
            bill = (mins - LOWINCOME_MIN) / 60 * LOWINCOME_OVERTIME_CHARGE * rate;
        } else {
            bill = 0;  // No overtime charge if consulting time is within the minimum limit.
        }
    } else {
        // Calculate billing for regular-income clients.
        if (mins > REGULAR_MIN) {
            bill = (mins - REGULAR_MIN) / 60 * REGULAR_OVERTIME_CHARGE * rate;
        } else {
            bill = 0;  // No overtime charge if consulting time is within the minimum limit.
        }
    }
    return bill;
}





