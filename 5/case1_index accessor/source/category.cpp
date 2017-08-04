//
// Created by agba on 7/16/17.
//
#include "../header/category.h"
#include "../header/grade.h"

//function to separate passing from failed students
std::vector<Student_info> extract_fails(std::vector<Student_info> &students) {
/*  std::vector<Student_info> pass, fail;

  for(std::size_t i = 0; i != students.size(); ++i) {
    if(fgrade(students[i]))
      fail.push_back(students[i]);
    else
      pass.push_back(students[i]);
  }
        students = pass;

        */

  using std::vector;
  vector<Student_info> fail;

  // case 2 : Using Erase and Index Aceesor
/*  for(std::size_t i = 0; i != students.size();
      i+=0) {
    if (fgrade(students[i])) {
      fail.push_back(students[i]);
      students.erase(students.begin() + i);
    }
    else
      ++i;
  }*/

  //CASE 3: using iterators
  vector<Student_info>::const_iterator iter = students.begin();

  while(iter != students.end()) {
    if(fgrade(*iter)) {
      fail.push_back(*iter);
      iter = students.erase(iter);
    }
    else
      ++iter;
  }


  return fail;
}

