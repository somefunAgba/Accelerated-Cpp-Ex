#include <iostream>
#include <vector>
/**
 * Write a program to calculate the average
 * of the numbers stored in a vector<double>.
 */

double avg_listofnum(std::vector<double> &num_list) {
  double sum(0);
  for (auto &num : num_list)
    sum+=num;

  return sum/num_list.size();
}


int main() {
  std::cout << "Hello, World!" << std::endl;

  std::vector<double> num_set;
  double num;
  std::cout << "Enter a List of Real Numbers: ";
  while(std::cin >> num)
    num_set.push_back(num);

  double average= avg_listofnum(num_set);

  std::cout << "Average of Data Set: "
            << average << std::endl;

  return 0;
}