#include <iostream>
using namespace std;

int main() {
    const int MAX = 100;   
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num <= MAX) {
        cout << "Number is within limit." << endl;
    } else {
        cout << "Number exceeds the limit." << endl;
    }

    return 0;
}
