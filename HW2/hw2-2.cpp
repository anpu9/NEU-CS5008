#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

/**
 * Calculate the wind factor using given speed and temperature.
 * @param speed the wind speed
 * @param temp the temperature degree
 * @return the wind factor
 */
double getWindFactor(double speed, double temp);

int main() {
    double speed, temp;
    cout << "Enter the wind speed: ";
    cin >> speed;

    cout << "Enter the temperature in Fahrenheit: ";
    cin >> temp;

    cout << "Wind factor: " << fixed << setprecision(2) << getWindFactor(speed, temp);

    return 0;
}

double getWindFactor(double speed, double temp) {
    const double CONSTANT = 35.74;
    const double T_FACTOR = 0.6215;
    const double V_FACTOR = 35.75;
    const double V_POW = 0.16;
    const double TV_FACTOR = 0.4275;

    // Apply the wind factor formula.
    double windFactor =
            CONSTANT + T_FACTOR * temp - V_FACTOR * pow(speed, V_POW) + TV_FACTOR * temp * pow(speed, V_POW);

    return windFactor;
}
