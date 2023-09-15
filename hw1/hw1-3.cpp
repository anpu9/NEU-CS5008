#include <iostream>
#include <cmath>
using namespace std; 

int main() {
    double populationA, growthRateA, populationB, growthRateB;

    cout << "Enter the current population of town A: ";
    cin >> populationA;
    cout << "Enter the current population of town B: ";
    cin >> populationB;
    cout << "Enter the growth rate of town A: ";
    cin >> growthRateA;
    cout << "Enter the growth rate of town B : ";
    cin >> growthRateB;
    // Calculate the number of years required

    double years = ceil((log(populationB) - log(populationA)) / (log(1 + growthRateA/100) - log(1 + growthRateB/100)));
    cout << years << endl;
    // Calculate the number of years required
    for(int i = 0; i < years; i++) {
        populationA = floor(populationA*(1+growthRateA/100));
        populationB = floor(populationB*(1+growthRateB/100));
    }

    cout << "After " << years << " year(s) the population of town A will be greater than or equal to the population of town B" << endl;
    cout << "After " << years << " population of town A is " << populationA << endl;
    cout << "After " << years << " population of town B is " << populationB << endl;

    return 0;
}
