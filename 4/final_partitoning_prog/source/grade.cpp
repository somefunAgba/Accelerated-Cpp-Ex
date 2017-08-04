//
// Created by agba on 7/9/17.
//

#include "../header/grade.h"
#include "../header/median.h"
#include <stdexcept>

/**
 * function to compute overall student grade from 3 parameters
 * via call by value
 */
double grade(double midterm, double exam, double hw) {
  return 0.2 * midterm + 0.4 * exam + 0.4 * hw;
}

double grade(const Student_info &student){
  if(student.homework.size() == 0){
    throw std::domain_error("student has no homework grade recorded!");
  }
  return grade(student.midterm, student.final, getMedian(student.homework));
}