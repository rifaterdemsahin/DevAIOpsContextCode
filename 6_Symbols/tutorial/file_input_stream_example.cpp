#include <iostream>  // Include the iostream library for input and output
#include <fstream>   // Include the fstream library for file handling
using namespace std; // Use the standard namespace

int main() {
    ifstream inputFile("example.txt"); // Create an ifstream object to read from the file "example.txt"
    string line;                       // Declare a string variable to store each line read from the file

    if (inputFile.is_open()) {         // Check if the file was successfully opened
        while (getline(inputFile, line)) { // Read each line from the file and store it in the 'line' variable
            cout << line << endl;      // Output the line to the console
        }
        inputFile.close();             // Close the file after reading all lines
    } else {
        cout << "Unable to open file" << endl; // Output an error message if the file could not be opened
    }
    return 0;                          // Return 0 to indicate successful execution
}