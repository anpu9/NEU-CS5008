#include <iostream>

using namespace std;

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

int reverseDigit(int num) {
    bool isNegative = false;
    if (num < 0) {
        isNegative = true;
        num = -num;
    }
    int reverseSum = 0;
    while (num > 0) {
        int digit = num % 10;
        reverseSum = reverseSum * 10 + digit;
        num /= 10;
    }
    return isNegative ? -reverseSum : reverseSum;
}