#include <iostream>
using namespace std;

int reverseNumber(int n, int rev = 0)
{
    if(n == 0)
        return rev;
    return reverseNumber(n / 10, rev * 10 + n % 10);
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int reversed = reverseNumber(num);

    if(reversed == num)
        cout << "Palindrome number";
    else
        cout << "Not a palindrome";

    return 0;
}
