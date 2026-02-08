#include <iostream>
using namespace std;

int nCr(int n, int r)
{
    
    if(r == 0 || r == n)
        return 1;

    
    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}

int main()
{
    int n, r;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;

    if(r > n || n < 0 || r < 0)
    {
        cout << "Invalid input";
    }
    else
    {
        cout << "nCr = " << nCr(n, r);
    }

    return 0;
}
