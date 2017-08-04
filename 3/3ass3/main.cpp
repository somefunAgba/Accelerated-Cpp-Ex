#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

///
/// \brief main
/// a program to report the length of the
/// longest and shortest string in its input.
/// \return
///
int main(){
    cout << " Enter a Statement below: " << endl;
    std::vector<string> data_input;
    string input;
    while(cin >> input){
        data_input.push_back(input);
    }
    std::cout << endl;

    std::vector<size_t> indata_len;
    for(std::string::size_type i = 0; i != data_input.size(); ++i){
        indata_len.push_back(data_input[i].length());
        cout << data_input[i] << ":" << indata_len[i]<< endl;
    }

    // sorting
    for(std::string::size_type i = 0; i != indata_len.size() - 1; ++i){
            for(std::string::size_type j = i + 1; j > 0; --j){
                if(indata_len[j-1] > indata_len[j]){
                    std::size_t temp_int = indata_len[j-1];
                    std::string temp_str = data_input[j-1];

                    indata_len[j-1] = indata_len[j];
                    data_input[j-1] = data_input[j];

                    indata_len[j] = temp_int;
                    data_input[j] = temp_str;
                }
            }
    }
    // printing
    cout << "\n...\nWord Analysis\n...\n";

    for(std::string::size_type i = 0; i != data_input.size(); ++i){
        cout << data_input[i] << ":" << indata_len[i]<< endl;
    }

    cout << "----\n";
    cout << "Shortest String: " << data_input[0]
         << " : " << indata_len[0] << endl;

    for(std::string::size_type i = 1; i != indata_len.size() - 1; ++i){
        if(indata_len[0] == indata_len[i]){
            cout << "Shortest String: " << data_input[i] << " : "
                 << indata_len[i] << "\n";
        }

    }
    cout << "----\n"
         << "Longest String: " << data_input[data_input.size() - 1]
         << " : " << indata_len[indata_len.size() - 1] << endl;

    for(std::string::size_type i = indata_len.size() - 2; i > 0; --i){
        if(indata_len[indata_len.size() - 1] == indata_len[i]){
            cout << "Longest String:" << data_input[i] << " : "
                 << indata_len[i] << "\n";
        }

    }
    std::cout << endl;


    return 0;
}
