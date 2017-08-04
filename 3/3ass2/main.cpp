#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
///
/// \brief main
/// a program to count how many times
/// each distinct word appears in its input.
/// \return
///
int main(){
    vector<string> word;
    string s; string::size_type r = 1, count = 0;
    bool exit = 0;
    while(cin >> s){
        word.push_back(s);
        count++;
    }
    cout << endl;

    for(string::size_type i = 0; i != count; ++i, r =1, exit = 0) {

        if(i > 0){
            for(string::size_type n = i - 1; n != -1; --n){
                int cmp = word[i].compare(word[n]);
                if(cmp == 0){
                    exit = 1;
                    break;
                }
            }
        }

        if(exit){
            continue;
        }

        for(string::size_type j = i + 1; j != count; ++j){
            int cmp = word[i].compare(word[j]);
            if(cmp == 0)
                ++r;
        }

        cout << word[i] << " appears " << r << " times." << endl;
//        r = 1;
//        exit = 0;
    }

    return 0;
}
