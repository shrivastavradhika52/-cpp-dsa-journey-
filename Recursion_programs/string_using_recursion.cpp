#include <iostream>
using namespace std;

void printSubsequence(string s, string output, int index) {
    
    if (index == s.length()) {
        cout << "\"" << output << "\"" << endl;
        return;
    }

    
    printSubsequence(s, output, index + 1);

    
    output.push_back(s[index]);
    printSubsequence(s, output, index + 1);
}

int main() {
    string s = "abc";
    printSubsequence(s, "", 0);
    return 0;
}
