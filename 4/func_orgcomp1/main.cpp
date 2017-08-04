#include <iostream>
#include <string>
#include <iomanip>
#include <ios>
/**
 * @brief
 * @param midterm
 * @param exam
 * @param hw
 * @return
 * function to compute overall student grade from 3 parameters
 * via call by value
 */
double grade(double midterm, double exam, double hw) {
  return 0.2 * midterm + 0.4 * exam + 0.4 * hw;
}

/**
 * @brief
 *  organising code in dataTry1 into functions
 * @return
 */
/**
 * @brief
 *  * FIRST TRY: computing students grade
 *
 * in this course, each student's final exam counts for
 * 40% of the final grade, the midterm exam counts for
 * 20%, and the average homework grade makes up the remaining 40%.
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
  double  midterm, final = 0;
  std::cin >> midterm >> final;
  std::cout << std::endl;

  std::cout << "Homework Grades: must be [3]";
  int count = 0;
  int sum = 0;

  double hw; int i = 0;
  while(i != 3) {
    std::cin >> hw;
    ++count;
    sum += hw;
    ++i;
  }

  // prevent zero homework input: division by zero is undefined
  if(!count){
    count = 1;
    std::cout << "Error: No Homework Score Entered!" << std::endl;
  }

  // print grades
  std::streamsize prec = std::cout.precision();
  std::cout << "Final Grade: " << std::setprecision(3)
            << grade(midterm, final, sum/count)
            << std::setprecision(prec)<< std::endl;

  return 0;
}