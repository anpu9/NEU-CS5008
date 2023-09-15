#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    char letterMap[26] = {'2', '2', '2', '3', '3', '3', '4', '4', '4', '5',
                          '5', '5', '6', '6', '6', '7', '7', '7', '7', '8',
                          '8', '8', '9', '9', '9', '9'};
    while (true) {
        string input;
        string output;
        // get input
        cout << "---------------------------------------------------c" << endl;
        cout << "Program to convert a phrase into a telephone number" << endl;
        cout << "Enter a phrase that contains only letters and is at least seven characters long, and enter q to quit: "<< endl;
        getline(cin, input);
        // user wants to quit
        if (input == "q") {
            break;
        }
        // transform to digit
        int count = 0;
        bool needHyphen = true;
        for (char c: input) {
            if (isalpha(c)) {
                // it's ok to transform
                output += letterMap[toupper(c) - 'A'];
                count++;
            }
            if (count == 3 && needHyphen) {
                // it's time to add hyphen
                output += '-';
                needHyphen = false;
            }
            if (count == 7) {
                break;
            }
        }
        cout << "Corresponding telephone number in digits: " << output << endl;
    }
    return 0;
}