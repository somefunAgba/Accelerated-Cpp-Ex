#include <iostream>
#include <vector>
#include <cctype>

using std::vector; using std::string;

vector<string> split(const string &s) {
  vector<string> ret;
  std::size_t i = 0;

  while(i != s.size()) {
    // ignore leading blanks
    while(i != s.size() && isspace(s[i]))
      ++i;
    // find the end of the next word
    std::size_t j = i;
    while(j != s.size() && !isspace(s[j]))
      ++j;
    // if we found any non white space character
    if (i != j) {
      // copy s starting at i and taking j-i chars
      ret.push_back(s.substr(i, j-i));
      i = j;
    }
  }

  return  ret;
}

int main() {
  std::cout << "Hello, World!" << std::endl;
  string s;

  // read and split each line of input
  while(getline(std::cin,s)) {

    std::cout << s << std::endl; // prints the whole line of statement

    vector<string> v = split(s); // splits the statement by detecting whites[ace

    // write each word in v
    for(std::size_t i = 0; i != v.size(); ++i)
      std::cout << v[i] << std::endl;
  }

  string ss;
  while (std::cin >> ss) // splits statement by whitespace detection
    std::cout << ss << std::endl;

  return 0;
}