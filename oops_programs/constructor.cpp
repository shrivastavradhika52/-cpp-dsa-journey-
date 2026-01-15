#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    float marks;

    
    Student() {
        roll = 0;
        marks = 0.0;
    }

    void display() {
        cout << "Roll No: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;   

    s.roll = 57;
    s.marks = 68.5;

    s.display();
    return 0;
}
