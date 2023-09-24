#include <iostream>
#include <string>

using namespace std;

bool isVowel(char ch);
void removeVowel(string& s);

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    cout << endl;
    removeVowel(s);
    cout << "After removing vowels: " << s << endl;
    return 0;
}
void removeVowel(string& s) {
    for(int i = 0; i < s.length(); ) {
        if(isVowel(s[i])) {
            s = s.substr(0,i) + s.substr(i+1,s.length());
        } else {
            i++;
        }
    }
}
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

