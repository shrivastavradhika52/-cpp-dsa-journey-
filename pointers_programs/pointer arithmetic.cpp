#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int *ptr = &a;

    cout << "Initial address: " << ptr << endl;

    ptr++;

    cout << "Address after increment: " << ptr << endl;

    return 0;
}
