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

    // Simplifying with While loop and If conditions
    // number of blanks sorrounding the greeting is two
    const int pad = 1;
    // total number of rows to write is 5
    const int rows = pad * 2 + 3;
    const std::string::size_type cols = greeting.size() + pad * 2 + 2;
    // size_type is the appropriate unsigned type for holding
    // the number of characters in a string

    std::cout << std::endl; // separate output from input

    // write current row of output
    for(int r = 0; r != rows; ++r) {
        std::string::size_type c = 0;
        //write current column of output
        while(c != cols) {
            if( r == pad + 1 && c == pad + 1) {
                std::cout << greeting;
                c += greeting.size();
            }
            else {
                // if we are on the border
                if(r == 0  || r  == rows - 1 ||
                        c == 0 || c == cols - 1)
                    std::cout << "*";
                else
                    std::cout << " ";
                ++c;
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
