#include <iostream>
using namespace std;


double power(double x, int n) {
    if (n == 0)
        return 1;

    if (n < 0)
        return 1 / power(x, -n);

    return x * power(x, n - 1);
}

int main() {
    double x;
    int n;
    cout << "Enter base and exponent: ";
    cin >> x >> n;

    cout << "Result: " << power(x, n);
    return 0;
}
