#include <iostream>
#include <string>
#include <iomanip>
#include <ios>
#include <vector>
#include <algorithm>
#include <stdexcept> // domain_error

/**
 * @brief
 * @param midterm, @param exam, @param hw
 * @return
 * function to compute overall student grade from 3 parameters
 * via call by value
 */
double grade(double midterm, double exam, double hw) {
  return 0.2 * midterm + 0.4 * exam + 0.4 * hw;
}

/**
 * @brief
 * @param hw
 * computes the median of any data set; vector hw
 * @return
 */
double getMedian(std::vector<double> hw) {
  if(hw.size() == 0){
    throw std::domain_error("median of an empty vector");
  }

  sort(hw.begin(), hw.end());

  std::size_t midp = hw.size() / 2;

  return hw.size() % 2 ? (hw[midp] + hw[midp-1]) / 2.0
                                : hw[midp];
}

double gradeCheck(double midterm, double exam, const std::vector<double> &hw){
  if(hw.size() == 0){
    throw std::domain_error("student has no homework grade recorded!");
  }
  return grade(midterm, exam, getMedian(hw));
}

std::istream &read_hw(std::istream &in, std::vector<double> &hw){
  if(in) {
    hw.clear(); // get rid of previous homework contents

    double x; int i = 0;
    while(i != 3 && in >> x) {
      hw.push_back(x); ++i;
    }

    in.clear();//clear the stream so that input will work for the next student
  }

  return in;
}

/**
 * @brief
 *  organising code in dataTry2 into functions
 * @return
 * : computing students grade
 *
 * in this course, each student's final exam counts for
 * 40% of the final grade, the midterm exam counts for
 * 20%, and the median homework grade makes up the remaining 40%.
 * @return
 */
int main() {
  // student's name
  std::cout << "Student Name: ";
  std::string name;
  std::getline(std::cin, name);
  std::cout << std::endl;

  // entering grades
  std::cout << "Midterm Grade and Final Exam Score: ";
  double midterm, final = 0;
  std::cin >> midterm >> final;
  std::cout << std::endl;

  // read homework grades
  std::cout << "Homework Grades: ";
  std::vector<double> hw;

  read_hw(std::cin, hw);

  // print grades
  try {
    std::streamsize prec = std::cout.precision();
    std::cout << "Final Grade: " << std::setprecision(3)
              /*<< grade(midterm, final, getMedian(hw));*/
              << gradeCheck(midterm, final, hw)
              << std::setprecision(prec) << std::endl;
  }
  catch (std::domain_error){
    std::cerr << std::endl << " You must enter grades. "
        "Please try again!" << std::endl;

  }
  return 0;
}