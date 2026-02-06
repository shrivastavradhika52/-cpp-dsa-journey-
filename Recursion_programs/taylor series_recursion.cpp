#include <iostream>
using namespace std;


double taylor(int x, int n) {
    static double p = 1, f = 1; // power and factorial

    if (n == 0)
        return 1;

    double result = taylor(x, n - 1);

    p = p * x;
    f = f * n;

    return result + (p / f);
}

int main() {
    int x, n;
    cout << "Enter value of x and number of terms: ";
    cin >> x >> n;

    cout << "e^" << x << " = " << taylor(x, n);
    return 0;
}
