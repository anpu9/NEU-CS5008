#include <iostream>

using namespace std;

// Function to reverse the digits of an integer
int reverseDigit(int num);

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << num << " with digits reversed = "
         << reverseDigit(num)
         << ", leading zeros if any are not shown." << endl;
    return 0;
}

// Function to reverse the digits of an integer
int reverseDigit(int num) {
    bool isNegative = false;

    // Check if the number is negative
    if (num < 0) {
        isNegative = true;
        num = -num;
    }

    int reverseSum = 0;

    // Reverse the digits
    while (num > 0) {
        int digit = num % 10;
        reverseSum = reverseSum * 10 + digit;
        num /= 10;
    }

    // Return the reversed number with the original sign
    return isNegative ? -reverseSum : reverseSum;
}
