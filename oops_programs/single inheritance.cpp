#include <iostream>
using namespace std;

class Person {
public:
    string name;

    void input() {
        cout << "Enter name: ";
        cin >> name;
    }
};

class Student : public Person {
public:
    int roll;

    void inputRoll() {
        cout << "Enter roll number: ";
        cin >> roll;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
    }
};

int main() {
    Student s;
    s.input();
    s.inputRoll();
    s.display();
    return 0;
}
