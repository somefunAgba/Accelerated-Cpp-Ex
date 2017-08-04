#include <iostream>
#include <string>
#include <vector> // vector
#include <algorithm> // sort

///
/// \brief main
/// a program that will keep track of grades
/// for several students at once. The program could keep
/// two vectors in sync: The first should hold the student's names, and
/// the second the final grades that can be computed as input is read.
/// For now, you should assume a fixed number of homework grades.
/// We'll see in chapter 4 how to handle a variable number of grades
/// intermixed with student names.
/// \return
///
int main(){
    std::cout << "Grade Record!" << std::endl;

    std::vector<std::string> student_name;
    std::vector<double> student_grade;

    std::cout << "Class Population: ";
    std::size_t i;
    std::cin >> i;
    std::cout << "Enter Student's Name and Grade!\n";

    for(size_t k = 0; k!=i; ++k){
        std::cout << "Student's Name: ";
        std::string name;
        std::cin.ignore();
        std::getline(std::cin, name);

        std::cout << "Enter Grades: [homework midterm exam]: ";
        double grade, home, mid, exam = 0;
        std::cin >> home >> mid >> exam;
        grade = 0.3*mid + 0.6*exam + 0.1*home;

        student_name.push_back(name);
        student_grade.push_back(grade);
    }

    /**
     * Algorithm to Format Name and Grade Results
     * Look for largest Name string in the Name list
     * .
     * Then subtract it from name length to get spaces
     * to leave after name
     */
    std::size_t len_tmp(0);
    for(size_t j = 0; j != i; ++j ){
        if(student_name[j-1].size() > student_name[j].size()
                || student_name[j-1].size() > len_tmp){
            len_tmp = student_name[j-1].size();
        }
        else if(student_name[j].size() > student_name[j - 1].size()
                || student_name[j].size() > len_tmp)
            len_tmp = student_name[j].size();

    }

    std::size_t div_line = len_tmp + 8;
    std::string line(div_line, '-');
    std::cout << line << std::endl;

    for(size_t k = 0; k!=i; ++k){
        std::size_t sps = len_tmp - student_name[k].size();
        std::string spc( sps, ' ');
        std::cout << student_name[k] << spc << " : " <<student_grade[k] << std::endl;
    }
    std::cout << line << std::endl;

    return 0;
}
