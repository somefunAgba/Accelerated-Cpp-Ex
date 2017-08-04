//
// Created by agba on 7/16/17.
//
#include "../header/category.h"
#include "../header/grade.h"

//function to separate passing from failed students

std::list<Student_info> extract_fails(std::list<Student_info> &students) {

  using std::list;
  list<Student_info> fail;

  //CASE 4: using iterators
  list<Student_info>::const_iterator iter = students.begin();

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


