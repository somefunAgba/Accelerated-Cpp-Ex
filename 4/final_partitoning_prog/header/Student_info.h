//
// Created by agba on 7/8/17.
//

#ifndef FINAL_PARTITONING_PROG_STUDENT_INFO_H
#define FINAL_PARTITONING_PROG_STUDENT_INFO_H
#include <iostream>
#include <vector>
#include <string>

struct Student_info {
    std::string name;
    double midterm, final;
    std::vector<double> homework;
};

bool compare(const Student_info&, const Student_info&);
std::istream &read_hw(std::istream&, std::vector<double>&);
std::istream &read(std::istream&, Student_info&);

#endif //FINAL_PARTITONING_PROG_STUDENT_INFO_H
