Iterate inside
## Steps to Run "Hello World" in Codespaces (C++)

1. **Open Codespaces**: Launch your Codespace environment from GitHub.

2. **Create a New File**: Inside your workspace, create a new file named `hello.cpp`.

3. **Write the Code**: Open `hello.cpp` and add the following C++ code:
    ```cpp
    #include <iostream>

    int main() {
        std::cout << "Hello, World!" << std::endl;
        return 0;
    }
    ```

4. **Compile the Code**: Open the terminal in Codespaces and compile the code using the following command:
    ```sh
    g++ -o hello hello.cpp
    g++ -o hello /workspaces/cplusplus/6_Symbols/hello.cpp
    ```

5. **Run the Program**: Execute the compiled program with the command:
    ```sh
    ./hello
    /workspaces/cplusplus/6_Symbols/hello
    ```

6. **See the Output**: You should see the output `Hello, World!` in the terminal.

That's it! You've successfully run a "Hello World" program in C++ using Codespaces. 