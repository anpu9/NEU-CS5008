/*
The population of a town A is less than the population of town B. 
However, the population of town A is growing faster than the population 
of town B. Write a program that prompts the user to enter the population 
and growth rate of each town. The program outputs after how many years 
the population of town A will be greater than or equal to the population of 
town B and the populations of both the towns at that time. (A sample input 
is: Population of town A ¼ 5000, growth rate of town A ¼ 4%, population 
of town B ¼ 8000, and growth rate of town B ¼ 2%.) 
*/

#include <iostream>
#include <cmath>

using namespace std; 

int main() {
    double populationA, growthRateA, populationB, growthRateB;

    // Input initial populations and growth rates
    cout << "Enter the initial population of town A: ";
    cin >> populationA;
    cout << "Enter the growth rate of town A (in decimal form): ";
    cin >> growthRateA;
    cout << "Enter the initial population of town B: ";
    cin >> populationB;
    cout << "Enter the growth rate of town B (in decimal form): ";
    cin >> growthRateB;

    // Calculate the number of years required
    double years = (log(populationB) - log(populationA)) / (log(1 + growthRateA) - log(1 + growthRateB));

    // Check if years is a valid number (not NaN or infinity)
    if (!isnan(years) && !isinf(years) && years >= 0) {
        // Output the result
        cout << "It will take approximately " << years << " years for town A's population to surpass or equal town B's population." << endl;
    } else {
        cout << "Invalid input. The populations and growth rates provided may not lead to a crossover." << endl;
    }
    return 0;
}
