#include <iostream>
int age;
std::cout << "Enter your age: ";
while (!(std::cin >> age)) {
    std::cin.clear(); // clear the error flag
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input
    std::cout << "Invalid input. Please enter a number: ";
}