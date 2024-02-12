#include <iostream> // input/output stream library

int main() {
    std::cout << "Hello, World!" << std::endl; // end of line

    int age = 25;
    float height = 5.9;
    char grade = 'A';
    std::string message = "Hello, C++!";

    std::cout << "Age: " << age << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Message: " << message << std::endl;
    return 0;

    // input from user
    std::cin >> number;
    std::cout << "You entered: " << number << std::endl;

    // if-else
    if (number > 0) {
        std::cout << "Positive" << std::endl;
    } else if (number < 0) {
        std::cout << "Negative" << std::endl;
    } else {
        std::cout << "Zero" << std::endl;
    }

    // for loop
    for (int i = 1; i <= 5; i++) {
        std::cout << i << " ";
    }
    std::cout << std::endl; // = std::cout << '\n' << std::flush;
}