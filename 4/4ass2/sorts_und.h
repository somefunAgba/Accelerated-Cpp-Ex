//
// Created by agba on 7/13/17.
//

#ifndef ACCELERATED_CPP_SORTS_UND_H
#define ACCELERATED_CPP_SORTS_UND_H

#include <iostream>
#include <string>
#include <vector>

/**
 * Author: Oluwasegun Somefun
 *
 * @brief
 * The function sorts_und: sorts a string list and counts
 * how many times it constituents occurs
 *
 * The first algorithm sorts a string list uniquely,
 * it retains the list order and arrangement
 * but instead of deleting repeated entries,
 * it places them next to each other.
 *
 * The second algorithm is useful to easily count
 * how many times each word occurred in a string list.
 *
 * The algorithms can also be modified to sort any list of any type
 * to easily count the how many times its constituents occur.
 *
 * Limitations:
 * 1. Discriminates between uppercase and lowercase words that are the same
 * 2. Does not separate characters at the end of words from a word e.g: , .
 * 
 * @param std::vector<std::string>
 */

void sorts_und(const std::vector<std::string> &word_list) {

  std::vector<std::string> copy_list(word_list), tmp_list;
  std::size_t maxlen = 0;

  /*
   * STEP1: Sort the list uniquely without deleting
   * a repeated constituent but arranging repeated words
   * side by side in the order which they occur.
   */
  for(std::size_t i = 0; i != copy_list.size(); ++i) {

    bool exit (0);

    if(i > 0)
      for(auto &k : tmp_list)
        if(copy_list[i].compare(k)== 0)
          exit = 1;

    if(exit)
      continue;

    maxlen = std::max(maxlen, copy_list[i].size());
    tmp_list.push_back(copy_list[i]);

    for(std::size_t j = i + 1; j != copy_list.size(); ++j)
      if(copy_list[i] == copy_list[j])
        tmp_list.push_back(copy_list[j]);

  }

  //word_list = tmp_list;

  std::string lines(maxlen, '-');

  // debug: print out  sorted word_list
  std::cout << lines << std::endl;
  for(auto w : tmp_list) {
    std::cout << w << std::endl;
  }
  std::cout << lines << std::endl;

  std::string lines2(maxlen+19, '-');
  /*
   *  STEP 2: Count how many times each constituent of
   *  the list occurred in ascending order
   */

  std::size_t w_count(0), temp = 0;
  std::cout << lines2 << std::endl;

  for(std::size_t i = 0; i!= tmp_list.size(); ++i){

    w_count = 1; temp = i;

    for(std::size_t j = i+1; j!= tmp_list.size(); ++j){
      if(tmp_list[i] == tmp_list[j])
        ++w_count;
      else
        break;
    }

    if(w_count > 1)
      i = i + w_count -1;

    std::cout << tmp_list[temp] << " appears "
              << w_count << "time(s)." << std::endl;

  }
  std::cout << lines2 << std::endl;

}


#endif //ACCELERATED_CPP_SORTS_UND_H
