#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::size_t width(const std::vector<std::string> &v) {
  std::size_t  maxlen = 0;
  for(std::size_t i = 0; i != v.size(); ++i) {
    maxlen = std::max(maxlen, v[i].size());
  }
  return maxlen;
}

std::vector<std::string> frame(const std::vector<std::string> &v) {
  using std::vector; using std::string;
  vector<string> ret;
  std::size_t  maxlen = width(v);
  string border(maxlen + 4, '*');

  // write top border
  ret.push_back(border);
  // write each interior row, bordered by an asterisk and a space
  for(std::size_t i = 0; i != v.size(); ++i) {
    ret.push_back("* " + v[i] + string(maxlen-v[i].size(), ' ') + " *");
  }
  // write bottom border
  ret.push_back(border);

  return ret;
}

std::vector<std::string> vcat(const std::vector<std::string> &top,
                              const std::vector<std::string> &bottom) {
  using std::vector; using std::string;
  // copy top picture
  vector<string> ret = top;

  // append bottom picture
/*  for(vector<string>::const_iterator it = bottom.begin();
      it != bottom.end(); ++it)
    ret.push_back(*it);*/

  // more smarter way to append/insert elements
  ret.insert(ret.end(), bottom.begin(), bottom.end());

  return ret;
}

std::vector<std::string> hcat(const std::vector<std::string> &left,
                              const std::vector<std::string> &right) {
  using std::vector; using std::string;
  vector<string> ret;

  // add a space between columns
  std::size_t width1 = width(left) + 1;

  // indices to compare elements from both columns respectively
  std::size_t i = 0 , j = 0;

  // go through all rows from both pictures
  while(i != left.size() || j != right.size()) {
    // create a new string to hold characters from both pictures
    string s;
    // copy a row from the left, if it exists
    if(i != left.size())
      s = left[i++];
    // pad to full width
    s += string(width1-s.size(), ' ');
    // copy row from the right, if it exists
    if(j != right.size())
      s += right[j++];

    // add s to the picture we are creating
    ret.push_back(s);
  }

  return ret;
}

int main() {
  using std::vector; using std::string;
  vector<string> pic_word;
  pic_word.push_back("this is an");
  pic_word.push_back("example");
  pic_word.push_back("to");
  pic_word.push_back("illustrate");
  pic_word.push_back("framing.");

  vector<string> frameout = frame(pic_word);
  for(auto &v : frameout) {
    std::cout << v << std::endl;
  }
  vector<string> vframe = vcat(pic_word, frameout);
  for(auto &v : vframe) {
    std::cout << v << std::endl;
  }
  vector<string> hframe = hcat(pic_word, frameout);
  for(auto &v : hframe) {
    std::cout << v << std::endl;
  }
  return 0;
}