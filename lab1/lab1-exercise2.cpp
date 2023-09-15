#include <iostream>
#include <cmath>
using namespace std;
int main() {
    const double CAPACITY = 3.78;
    const double COST_EACH = 0.38;
    const double PROFIT_EACH = 0.27;
    double amount;
    int cartons;
    double cost;
    double profit;

    cout << "please input the total amount of milk produced in the morning:" << endl;
    cin >> amount;
    cartons = round(amount / CAPACITY);
    cost = amount * COST_EACH;
    profit = cartons * PROFIT_EACH;
    cout << "the number of milk cartons:" << cartons << endl;
    cout << "the cost of producing milk :" << cost << endl;
    cout << "the profit of producing milk :" << profit << endl;
}