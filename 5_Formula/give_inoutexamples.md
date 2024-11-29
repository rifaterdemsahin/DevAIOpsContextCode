How They Work

Output Example: 

When using cout, you can output text and variables seamlessly. For instance, std::cout << Your score is  << score << '\n'; will output the text combined with the value of score.

Input Example: 

Using cin allows for interactive console applications where the user’s input directly influences the behavior of the program. For instance, retrieving a user's age might involve std::cin >> age;, where age is a previously declared integer variable.


Additional Examples:

Output Example with Formatting:

You can also format the output using manipulators. For example, std::cout << "Your score is: " << std::setw(5) << score << '\n'; will output the score right-aligned within a field of 5 characters.

Input Example with Validation:

To ensure valid input, you can use a loop to repeatedly prompt the user until a valid input is received. For example:
```cpp
int age;
std::cout << "Enter your age: ";
while (!(std::cin >> age)) {
    std::cin.clear(); // clear the error flag
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input
    std::cout << "Invalid input. Please enter a number: ";
}
```
This ensures that the user enters a valid integer for age.