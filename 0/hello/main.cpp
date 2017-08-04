#include <iostream>

int main() {
    std::cout << "Hello, C++!" << std::endl;
    (std::cout << "Hello, World!") << std::endl; // left-associativity
    std::cout << "This \" is a quote,\tthis"
                 " \\ is a backslash." << std::endl;
    return 0;
}
