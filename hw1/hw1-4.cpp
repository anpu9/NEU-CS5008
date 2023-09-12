/*
The first 11 prime integers are 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, and 31. A 
positive integer between 1 and 1000 (inclusive), other than the first 11 
prime integers, is prime if it is not divisible by 2, 3, 5, 7, 11, 13, 17, 19, 23, 
29, and 31. Write a program that prompts the user to enter a positive 
integer between 1 and 1000 (inclusive) and that outputs whether the 
number is prime. If the number is not prime, then output all the numbers, 
from the list of the first 11 prime integers, which divide the number.
*/

#include <iostream>
#include <string>
using namespace std; 

int main() {
    int primes[11] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    string res;
    int num;
    bool isPrime = true;
    cout << "Number:" << endl;
    cin >> num;

    for (int prime : primes)
    {
        if(num % prime == 0) {
            isPrime = false;
            res += to_string(prime) + " ";
        }
    }
    if(isPrime) {
        cout << "Answers: Yes, it is a prime." << endl;
    } else {
        cout << "this number is not a prime, and it can be divided by " << res << "."<< endl;
    }
    return 0;
}