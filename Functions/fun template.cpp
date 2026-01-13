#include <iostream>
using namespace std;

template <typename T>
T myMax(T x, T y)
{
    return (x > y) ? x : y;
}

int main()
{
    int c = myMax(56, 59);
    cout << "Max integer is: " << c << endl;

    float d = myMax(6.7f, 9.0f);
    cout << "Max float is: " << d << endl;

    return 0;
}
