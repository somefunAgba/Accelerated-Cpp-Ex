/**
 * @brief
 *  Write a function that reads words from an input stream
 *  and stores them in a vector.
 *  Use that function both to write programs
 *  that count the number of words in the input, and
 *  to count how many times each word occurred
 */
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include "sorts_und.h"

std::istream &read_str(std::istream &in, std::vector<std::string> &words) {
  std::cout << "Enter some words:" << std::endl;
  std::string word;
  while(not in.eof() && in >> word) {
    words.push_back(word);
  }
  std::cout << std::endl;
  return in;
}

int main() {
  std::cout << "Hi!" << std::endl;
  std::vector<std::string> word_bank;
  read_str(std::cin, word_bank);

  // printing words
  for(auto w : word_bank) {
    std::cout << w << std::endl;
  }
  std::cout << "Word Count: " << word_bank.size() << std::endl;

  // instead of using std::sort(word_bank.begin(), word_bank.end());
  sorts_und(word_bank);
  sorts_und()


  return 0;
}
