#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const int ARRAY_SIZE = 50;
const int COLS = 10;

// Function to initialize the array
void initiate(double nums[]) {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (i < ARRAY_SIZE / 2) {
            nums[i] = pow(i * 1.0, 2);
        } else {
            nums[i] = 3.0 * i;
        }
    }
}

// Function to print the array
void print(double nums[], int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(5) << nums[i];
        if ((i + 1) % COLS == 0) {
            cout << endl;
        }
    }
}

int main() {
    double nums[ARRAY_SIZE];

    // Initialize the array
    initiate(nums);

    // Print the array
    print(nums, ARRAY_SIZE);

    return 0;
}
