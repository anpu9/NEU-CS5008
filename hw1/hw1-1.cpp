/*
Dairy Farm decided to ship milk in containers in the form of cubes rather 
than cylinders. Write a program that prompts the user to input the radius of 
the base and the height of a cylindrical container and outputs the side of the 
cube with the same volume as the cylindrical container.
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double radius;
    double height;
    double volume;
    double side;
    const double PI = 3.14159;
    cout << "input the radius of the base:" << endl;
    cin >> radius;
    cout << "input the height of a cylindrical container" << endl;
    cin >> height;
    
    volume = PI * radius * radius * height;
    side = cbrt(volume);
    cout << "the side of the cube with the same volume is " << fixed <<setprecision(2)<< side << endl;
}