#include <iostream>
#include <string>
using namespace std;

int main() {
    string users[5] = {"rahul", "amit", "neha", "rohan"};
    string name;
    bool found = false;

    cout << "Enter username to search: ";
    cin >> name;

    for (int i = 0; i < 5; i++) {
        if (users[i] == name) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "Username found";
    } else {
        cout << "Username not found";
    }

    return 0;
}
