#include <iostream>
#include <string>

/**
 * generate a framed greeting
 * with no separation from the frame
 */
using namespace std;

int main()
{
    cout << "Name: ";
    string name;
    cin >> name;

    // build greeting message
    string greeting = "Hello " + name + "!";

    const int pad = 0;
    const int rows = pad + 3;
    string::size_type cols = greeting.size() + pad + 2;

    cout << endl;

    for(int r = 0; r != rows; ++r) {
        for(string::size_type c = 0; c !=cols; ++c) {
            if(r == pad + 1 && c == pad + 1) {
                cout << greeting;
                c += greeting.size() - 1;
            }
            else {
                if(r == 0 || r == rows - 1 ||
                        c == 0 || c == cols - 1)
                    cout << "*";
               //else
                    // do nothing
            }
        }
        cout << endl;
    }

    return 0;
}
