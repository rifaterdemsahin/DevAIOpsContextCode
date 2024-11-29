#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outputFile("output.txt");
    if (outputFile.is_open()) {
        outputFile << "This is a line.\n";
        outputFile << "This is another line.\n";
        outputFile.close();
    } else {
        cout << "Unable to open file" << endl;
    }
    return 0;
}