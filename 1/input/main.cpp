#include <iostream>
#include <string>

int main() {
    // Ask for name
    std::cout << "Please enter your first name: ";

    // Read the name
    std::string name; // define name
    std::cin >> name; // read into name

    // Write a greeting
    std::cout << "Hello, " << name << "!" << std::endl;

    return 0;
}
