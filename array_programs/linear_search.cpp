#include <iostream>
using namespace std;

int main() {
    int n, key, i;
    int arr[50];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at index " << i;
            return 0;
        }
    }

    cout << "Element not found";
    return 0;
}
