#include <iostream>
using namespace std;

int main() {
    int num;
    int sumOfOdd = 0;
    int sumOfEven = 0;
    cout << "Enter integers, separated by spaces. Enter any non-integer to stop:" << endl;
    while(cin >> num) {
        if(num % 2 == 0) {
            sumOfEven += num;
        } else {
            sumOfOdd += num;
        }
    }
    // Print the sums
    cout << "Sum of even integers: " << sumOfEven << endl;
    cout << "Sum of odd integers: " << sumOfOdd << endl;

}
