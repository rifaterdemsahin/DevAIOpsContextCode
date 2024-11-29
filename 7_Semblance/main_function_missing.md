#include <iostream>
int age;
std::cout << "Enter your age: ";
while (!(std::cin >> age)) {
    std::cin.clear(); // clear the error flag
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input
    std::cout << "Invalid input. Please enter a number: ";
}


The problem is that the code is missing a `main` function, which is required for the program to run. To fix this, you need to wrap the code inside a `main` function.



Made changes.

#include <iostream>
#include <limits>

int main() {
    int age;
    std::cout << "Enter your age: ";
    while (!(std::cin >> age)) {
        std::cin.clear(); // clear the error flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input
        std::cout << "Invalid input. Please enter a number: ";
    }
    return 0;
}