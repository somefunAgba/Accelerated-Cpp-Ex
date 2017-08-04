#include <iostream>
#include <string>
#include <iomanip>
#include <ios>

/**
 * @brief main
 * FIRST TRY: computing students grade
 *
 * in this course, each student's final exam counts for
 * 40% of the final grade, the midterm exam counts for
 * 20%, and the average homework grade makes up the remaining 40%.
 *
 * @return
 */

int main() {
    // Ask for and Read in student's name
    std::cout << " Student Name: ";
    std::string name;
    std::getline(std::cin, name);
    std::cout << "Hello, " << name << "!" << std::endl;

    //Ask for and read in midterm and final grades
    std::cout << "Enter midterm and final exam grades respectively: ";
    double midterm, final;
    std::cin >> midterm >> final;

    // Ask for homework grades
    std::cout << "Enter all your homework grades,"
                 "followed by end-of-file: ";

    // number and sum of grades read so far
    int count = 0;
    double sum = 0;

    // variable into which to read grades
    double homex;

    // invariant: we have read 'count' grades so far
    // and 'sum' is the sum of the first 'count' grades
    while(std::cin >> homex) {
        ++count;
        sum += homex;
    }
    std::cout << std::endl;
    /*
    The average-grade computation might divide by zero if the
student didn't enter any grades. Division by zero
is undefined in C++, which means that the implementation is
permitted to do anything it likes.

Rewrite the program so that its behavior does not depend on how the
implementation treats division by zero.
     */

    if(!count)
        count = 1;
    //Write results
    std::streamsize prec = std::cout.precision();
    std::cout << "Your final grade is " << std::setprecision(3)
              << 0.2 * midterm + 0.4 * final + 0.4 * sum / count
              << std::setprecision(prec) << std::endl;


    return 0;
}
