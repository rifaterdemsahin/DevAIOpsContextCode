prompt:
- create 5 different cpp filesfor stream examples on cpp
## Stream Examples in C++

Here are five different C++ files demonstrating various stream examples:

1. **Input Stream Example** - `input_stream_example.cpp`
    ```cpp
    #include <iostream>
    using namespace std;

    int main() {
        int number;
        cout << "Enter a number: ";
        cin >> number;
        cout << "You entered: " << number << endl;
        return 0;
    }
    ```

2. **Output Stream Example** - `output_stream_example.cpp`
    ```cpp
    #include <iostream>
    using namespace std;

    int main() {
        cout << "Hello, World!" << endl;
        return 0;
    }
    ```

3. **File Input Stream Example** - `file_input_stream_example.cpp`
    ```cpp
    #include <iostream>
    #include <fstream>
    using namespace std;

    int main() {
        ifstream inputFile("example.txt");
        string line;
        if (inputFile.is_open()) {
            while (getline(inputFile, line)) {
                cout << line << endl;
            }
            inputFile.close();
        } else {
            cout << "Unable to open file";
        }
        return 0;
    }
    ```

4. **File Output Stream Example** - `file_output_stream_example.cpp`
    ```cpp
    #include <iostream>
    #include <fstream>
    using namespace std;

    int main() {
        ofstream outputFile("example.txt");
        if (outputFile.is_open()) {
            outputFile << "This is a line.\n";
            outputFile << "This is another line.\n";
            outputFile.close();
        } else {
            cout << "Unable to open file";
        }
        return 0;
    }
    ```

5. **String Stream Example** - `string_stream_example.cpp`
    ```cpp
    #include <iostream>
    #include <sstream>
    using namespace std;

    int main() {
        stringstream ss;
        ss << "123";
        int number;
        ss >> number;
        cout << "The number is: " << number << endl;
        return 0;
    }
    ```