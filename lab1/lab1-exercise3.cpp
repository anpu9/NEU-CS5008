#include <iostream>
using namespace std;

int main() {
    double rate = 15.50;
    int hours = 40;
    int weeks = 5;
    double tax = 0.14;
    
    double incomePreTax = rate * hours * weeks;
    double incomePostTax = incomePreTax * (1 - tax);
    
    double clothes = incomePostTax * 0.10;
    double school = incomePostTax * 0.01;
    
    double remaining = incomePostTax - clothes - school;
    
    double savings = remaining * 0.25;
    double parentsSavings = savings * 0.50;
    
    cout << "a. Income before tax: $" << incomePreTax << endl;
    cout << "   Income after tax: $" << incomePostTax << endl;
    
    cout << "b. Money spent on clothes and accessories: $" << clothes << endl;
    cout << "c. Money spent on school supplies: $" << school << endl;
    
    cout << "d. Money spent on savings bonds: $" << savings << endl;
    cout << "e. Money your parents spent on additional savings bonds: $" << parentsSavings << endl;

    return 0;
}
