#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double amount;
    int cartons;
    double cost;
    double profit;
    cout << "please input the total amount of milk produced in the morning:" << endl;
    cin >> amount;
    cartons = round(amount / 3.78); 
    cost = amount * 0.38;
    profit = cartons * 0.27;
    cout << "the cost of producing milk :" << cost << endl;
    cout << "the profit of producing milk :" << profit << endl;
}