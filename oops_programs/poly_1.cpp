#include <iostream>
using namespace std;

class Calculate {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculate obj;
    cout << "Sum of two numbers: " << obj.add(5, 10) << endl;
    cout << "Sum of three numbers: " << obj.add(5, 10, 15) << endl;
    return 0;
}
