//
// Created by agba on 7/8/17.
//

#include "../header/Student_info.h"

/**
 * arrange student's data alphabetically.
 * we can pass this compare function as
 * an argument to the sort function
 */
bool compare(const Student_info &x, const Student_info &y) {
  return x.name < y.name;
}

std::istream &read_hw(std::istream &in, std::vector<double> &hw) {
  if (in) {
    hw.clear(); // get rid of previous homework contents

    double x;
    int i = 0;
    while (i!=3 && in >> x) {
      hw.push_back(x);
      ++i;
    }

    in.clear();//clear the stream so that input will work for the next student
  }

  return in;
}
/**
 * Read data into the Student_info object
 */
std::istream &read(std::istream &is, Student_info &student) {
  std::cout << "Name MidTerm Exam: ";
  is >> student.name >> student.midterm
     >> student.final;
  std::cout << "Homework: ";
  read_hw(is, student.homework);
  return is;
}

