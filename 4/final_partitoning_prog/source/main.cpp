#include <iostream>
#include <ios>
#include <iomanip>
#include <vector>
#include <algorithm>

#include "../header/Student_info.h"
#include "../header/grade.h"
#include "../header/median.h"

/**
 * organising student data
 *
 * in this course, each student's final exam counts for
 * 40% of the final grade, the midterm exam counts for
 * 20%, and the median homework grade makes up the remaining 40%.
 */
int main() {
  // student info
  std::vector<Student_info> students;
  Student_info record;
  std::string::size_type maxlen(0);
  std::cout << "Estimated/Exact Class Population: ";
  std::size_t i; std::cin >> i;

  // read all student record
  // find length of longest name
  // invariant: students and maxlen
  for(size_t k = 0; k!=i; ++k){
    read(std::cin, record);
    maxlen = std::max(maxlen, record.name.size());
    students.push_back(record);
  }

  // alphabetize the student record using sort
  std::sort(students.begin(), students.end(), compare);

  std::string line(maxlen + 8, '-');
  std::cout << line << std::endl;

  for(Student_info &student : students){ // range based loop
    // write name, padded to maxlen + 1 characters
    std::cout << student.name
              << std::string(maxlen+1-student.name.size(), ' ');

    // print grades
    try {
      double final_grade = grade(student);
      std::streamsize prec = std::cout.precision();
      std::cout << std::setprecision(3)
                << final_grade
                << std::setprecision((int) prec) << std::endl;
    }
    catch (std::domain_error e){
      std::cerr << e.what() << std::endl;
    }
  }

  std::cout << line << std::endl;

  return 0;
}