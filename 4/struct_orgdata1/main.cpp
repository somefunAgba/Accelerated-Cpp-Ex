#include <iostream>
#include <string>
#include <iomanip>
#include <ios>
#include <vector>
#include <algorithm>
#include <stdexcept> // domain_error

/**
 * Keeping the student's data together in
 * one place, creating an object
 * struct type Student_info
 */
struct Student_info {
    std::string name;
    double midterm, final;
    std::vector<double> homework;
};

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
 * Read data into the Student_info object
 */
std::istream &read(std::istream &is, Student_info &student){
    std::cout << "Name MidTerm Exam: ";
    is >> student.name >> student.midterm
                       >> student.final;
    std::cout << "Homework: ";
    read_hw(is, student.homework);
    return is;
}

/**
 * computes the median of any data set; vector hw
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

/**
 * arrange student's data alphabetically.
 * we can pass this compare function as
 * an argument to the sort function
 */
 bool compare(const Student_info &x, const Student_info &y){
    return x.name < y.name;
}

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
    std::cout << "Class Population: ";
    std::size_t i; std::cin >> i;

    // read all student record
    // find length of longest name
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