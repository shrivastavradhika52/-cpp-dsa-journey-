#include <iostream>
using namespace std;

class Test {
public:
    Test() {
        cout << "Object created" << endl;
    }

    ~Test() {
        cout << "Object destroyed" << endl;
    }
};

int main() {
    Test t1, t2;
    return 0;
}
