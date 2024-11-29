int age;
std::cout << "Enter your age: ";
while (!(std::cin >> age)) {
    std::cin.clear(); // clear the error flag
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input
    std::cout << "Invalid input. Please enter a number: ";
}


@rifaterdemsahin ➜ /workspaces/cplusplus/6_Symbols (main) $     g++ -o inout /workspaces/cplusplus/6_Symbols/inout.cpp
/workspaces/cplusplus/6_Symbols/inout.cpp:2:6: error: ‘cout’ in namespace ‘std’ does not name a type
    2 | std::cout << "Enter your age: ";
      |      ^~~~
/workspaces/cplusplus/6_Symbols/inout.cpp:1:1: note: ‘std::cout’ is defined in header ‘<iostream>’; did you forget to ‘#include <iostream>’?
  +++ |+#include <iostream>
    1 | int age;
/workspaces/cplusplus/6_Symbols/inout.cpp:3:1: error: expected unqualified-id before ‘while’
    3 | while (!(std::cin >> age)) {
      | ^~~~~
@rifaterdemsahin ➜ /workspaces/cplusplus/6_Symbols (main) $ 


rifaterdemsahin: how do fix it append down below and why

GitHub Copilot: The problem is that the code is missing the `#include <iostream>` directive at the beginning. To fix this, you need to add `#include <iostream>` at the top of the file.



Made changes.