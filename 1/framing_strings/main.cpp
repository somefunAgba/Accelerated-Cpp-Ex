#include <iostream>
#include <string>
/**
 * @brief main
 * ask for a person's name and
 * generate a framed greeting
 */
int main() {
    std::cout << "Please enter your first name: ";
    std::string name;
    std::cin >> name;

    // Building Frame lines
    // build the main message we intend to display
    const std::string greeting = "Hello " + name + "!";

    // build the second and fourth lines of output
    const std::string spaces(greeting.size(), ' '); // constructing a string from two expressions, an int value and a char value character literal, which is always enclosed in single quotes ' '
    // i.e the string is the char value copied int value times on a line
    // std::string stars(10, '*');
    const std::string second = "* " + spaces + " *";

    // build the first and fifth lines of output
    const std::string first(second.size(), '*');

    // Writing the Frame to Output
    std::cout << std::endl;
    std::cout << first << std:: endl;
    std::cout << second << std::endl;
    std::cout << "* " << greeting << " *" << std::endl;
    std::cout << second << std::endl;
    std::cout << first << std:: endl;

    return 0;
}
