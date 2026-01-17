#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "This is Base class display function" << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "This is Derived class display function" << endl;
    }
};

int main() {
    Base* b;
    Derived d;
    b = &d;
    b->display();
    return 0;
}
