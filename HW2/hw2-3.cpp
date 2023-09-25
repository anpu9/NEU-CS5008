#include <iostream>
#include <string>

using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin >> str;
    cout << "String in upper case letters is: " << endl;
    for (int i = 0; i < strlen(str); i++) {
        putchar(toupper(str[i]));
    }
    return 0;
}