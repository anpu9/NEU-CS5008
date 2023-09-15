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