#include <iostream>

using namespace std;

// Function to check if a character is a vowel
bool isVowel(char ch);

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    cout << endl;

    // Check if the entered character is a vowel and display the result
    cout << ch << " is a vowel: " << isVowel(ch) << endl;
    return 0;
}

// Function to check if a character is a vowel
bool isVowel(char ch) {
    switch (ch) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        default:
            return false;
    }
}
