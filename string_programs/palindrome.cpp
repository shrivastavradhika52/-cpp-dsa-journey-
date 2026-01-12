#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int i, len;
    bool palindrome = true;

    cout << "Enter a string: ";
    cin >> str;

    len = str.length();

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            palindrome = false;
            break;
        }
    }

    if (palindrome) {
        cout << "Palindrome string";
    } else {
        cout << "Not a palindrome string";
    }

    return 0;
}
