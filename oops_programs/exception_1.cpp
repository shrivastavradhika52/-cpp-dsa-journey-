#include <iostream>
using namespace std;

#define MAX 5

int stack[MAX];
int top = -1;


void push(int value) {
    if (top == MAX - 1) {
        throw "Stack Overflow";
    }
    stack[++top] = value;
    cout << value << " pushed into stack" << endl;
}


void pop() {
    if (top == -1) {
        throw "Stack Underflow";
    }
    cout << stack[top--] << " popped from stack" << endl;
}

int main() {
    try {
        push(10);
        push(20);
        push(30);
        push(40);
        push(50);
        push(60);   // Overflow occurs
    }
    catch (const char* msg) {
        cout << "Exception: " << msg << endl;
    }

    try {
        pop();
        pop();
        pop();
        pop();
        pop();
        pop();      // Underflow occurs
    }
    catch (const char* msg) {
        cout << "Exception: " << msg << endl;
    }

    return 0;
}
