#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollNo;
    int marks1, marks2, marks3;

    void input() {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> rollNo;

        cout << "Enter marks of subject 1: ";
        cin >> marks1;

        cout << "Enter marks of subject 2: ";
        cin >> marks2;

        cout << "Enter marks of subject 3: ";
        cin >> marks3;
    }

    void display() {
        cout << "\nStudent Details\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks 1: " << marks1 << endl;
        cout << "Marks 2: " << marks2 << endl;
        cout << "Marks 3: " << marks3 << endl;
        cout << "Total Marks: " << (marks1 + marks2 + marks3) << endl;
    }
};

int main() {
    Student s;
    s.input();
    s.display();
    return 0;
}
