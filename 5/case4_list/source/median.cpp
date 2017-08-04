//
// Created by agba on 7/9/17.
//
#include "../header/median.h"
#include <stdexcept> // domain error
#include <algorithm> //sort


/**
 * computes the median of any data set; list hw
 */
double getMedian(std::vector<double> hw) {
  if(hw.size() == 0){
    throw std::domain_error("median of an empty list");
  }

  sort(hw.begin(), hw.end());

  std::size_t midp = hw.size() / 2;

  return hw.size() % 2 ? (hw[midp] + hw[midp-1]) / 2.0
                       : hw[midp];
}