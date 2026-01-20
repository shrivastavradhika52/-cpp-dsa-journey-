#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outFile;
    outFile.open("sample.txt");     

    outFile << "This is a basic file handling program in C++.";
    outFile.close();

    ifstream inFile;
    inFile.open("sample.txt");      

    string data;
    getline(inFile, data);
    cout << "File content: " << data << endl;

    inFile.close();

    return 0;
}
