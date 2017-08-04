#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

int main() {
  int int_num(1000);
  double double_num(1000.0);

  while(int_num >= 1000 || double_num >= 1000.0){
    std::cout << "Square of integers < 1000" << std::endl;
    std::cout << "Number: "; std::cin >> int_num;
    std::cout << "Square of double values < 1000.0" << std::endl;
    std::cout << "Number: "; std::cin >> double_num;
  }

  std::vector<int> storei; storei.push_back(int_num);

  std::string spacei = std::to_string(storei[0]);
  int w = spacei.size();
  std::cout << std::setw(w) << int_num
            << std::setw(w+w+2) << int_num * int_num << std::endl;

  std::vector<double> stored; stored.push_back(double_num);
  std::string spaced = std::to_string(stored[0]);
  std::cout<<spaced<<std::endl;
  int i = 0;
  for(auto s : spaced){
    if(s=='.'){
      break;
    }
    else {
      ++i;
    }
  }
  std::cout << i << std::endl;
  int wd = spaced.size();
  wd = wd-1-i; // 4 d.p
  std::cout << wd << std::endl;
  int prec =std::cout.precision();
  std::cout << std::setw(wd) << double_num
            << std::setprecision(i+i+4) << std::setw(2+i+i+5)
            << double_num * double_num <<std::setprecision(prec)
                                                   <<std::endl;

  return 0;
}