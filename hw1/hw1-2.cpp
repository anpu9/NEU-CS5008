/*
Paula and Danny want to plant evergreen trees along the back side of their 
yard. They do not want to have an excessive number of trees. Write a 
program that prompts the user to input the following: 
a. The length of the yard. 
b. The radius of a fully grown tree. 
c. The required space between fully grown trees. 
The program outputs the number of trees that can be planted in the yard and 
the total space that will be occupied by the fully grown trees. 
*/
#include <iostream>
using namespace std;

int main() {
    double length;
    double radius;
    double space;
    
    
    cout << "input the length of the yard" << endl;
    cin >> length;
    cout << "input the radius of a fully grown tree" << endl;
    cin >> radius;
    cout << "input the required space between fully grown trees" << endl;
    cin >> space;
    
    double eachOccupied = 2*radius+space;
    int count = static_cast<int> (length/eachOccupied);
    double occupied = eachOccupied * count;
    cout << "the number of trees that can be planted in the yard is " << count << endl;
    cout << "the total space that will be occupied by the fully grown trees is " << occupied << endl;

    return 0;
}