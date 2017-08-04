#include <iostream>
#include <string>
#include <iomanip> // setprecision
#include <ios> // streamsize
#include <vector> // vector
#include <algorithm> // sort

/**
 * @brief main
 * FIRST TRY: computing students grade Using median
 * instead of average.
 *
 * in this course, each student's final exam counts for
 * 40% of the final grade, the midterm exam counts for
 * 20%, and the median homework grade makes up the remaining 40%.
 *
 * end-of-file is: Ctrl + D on Linux
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

    std::vector<double> homex;
    double x;
    // invariant: homework contains all the homework grades read so far
    while(std::cin >> x)
        homex.push_back(x);

    // check that student's grades are entered
    typedef std::vector<double>::size_type vec_sz;
    vec_sz size = homex.size();
    if(size == 0) {
        std::cout << std::endl << "You must enter grades.  "
                                  "Please try again." << std::endl;
        return 1;
    }

    // sort grades
    std::sort(homex.begin(), homex.end());

    //compute median homework grade
    vec_sz mid = size / 2;
    double median;
    median = size % 2 == 0 ? (homex[mid] + homex[mid-1])/2
                           : homex[mid];

    std::cout << std::endl;

    //Write results
    std::streamsize prec = std::cout.precision();
    std::cout << "Your final grade is " << std::setprecision(3)
              << 0.2 * midterm + 0.4 * final + 0.4 * median
              << std::setprecision(prec) << std::endl;


    return 0;
}
