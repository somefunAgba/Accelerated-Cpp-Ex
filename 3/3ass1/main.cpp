#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
///
/// \brief dataLen
/// returns the length or number of integers in a data set
/// \param data
/// \return
///
std::vector<int>::size_type dataLen(std::vector<int> data){
    std::vector<int>::size_type data_len = data.size();
    return  data_len;
}
///
/// \brief midPoint
/// returns the average of an integer
/// \param data
/// \return
///
std::vector<int>::size_type midPoint(std::vector<int> data){
    std::vector<int>::size_type mid_index = dataLen(data) / 2;
    return  mid_index;
}
///
/// \brief median
/// returns the median of a set of data integers
/// \param data
/// \return
///
double median(std::vector<int> data){
    std::sort(data.begin(), data.end());

    std::vector<int>::size_type midIndex = midPoint(data);

    double median = dataLen(data) % 2 == 0 ?
                ((data[midIndex] + data[midIndex - 1]) / 2.0)
                : data[midIndex];

    return median;
}
///
/// \brief main
/// a program to compute and print the quartiles
/// (that is, the quarter of the numbers with the largest values,
/// the next highest quarter, and so on) of a set of integers.
/// \return
///
int main() {
    std::cout << "Enter the data set: " << std::endl;
    std::vector<int> dataSet;
    int d;
    while (std::cin >> d) {
        dataSet.push_back(d);
    }
    std::cout << std::endl;

    double q1(0.0), q2(0.0), q3(0.0);
    q2 = median(dataSet);

    std::vector<int>::size_type mid = midPoint(dataSet);
    bool state = dataLen(dataSet) % 2 == 0; // if state is
    // true, 1 then it is even, else if false, 0, odd

    if(!state){
        std::vector<int> up_dataset;
        std::vector<int> down_dataset;

        for(std::vector<int>::size_type i = 0; i < mid; ++i){
            up_dataset.push_back(dataSet[i]);
        }

        for(std::vector<int>::size_type i = mid + 1;
            i != dataLen(dataSet); ++i){
            down_dataset.push_back(dataSet[i]);
        }

        q1 = median(up_dataset);
        q3 = median(down_dataset);
    }

    if(state){
        std::vector<int> up_dataset;
        std::vector<int> down_dataset;

        for(std::vector<int>::size_type i = 0; i < mid; ++i){
            up_dataset.push_back(dataSet[i]);
        }

        for(std::vector<int>::size_type i = mid; i != dataLen(dataSet); ++i){
            down_dataset.push_back(dataSet[i]);
        }

        q1 = median(up_dataset);
        q3 = median(down_dataset);
    }

    std::cout << "First Quartile: Q1 = " << q1 << std::endl;
    std::cout << "Second Quartile: Q2 = " << q2 << std::endl;
    std::cout << "Third Quartile: Q3 = " << q3 << std::endl;






    return 0;
}
