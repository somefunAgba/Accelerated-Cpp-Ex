#include <iostream>
#include <string>

/**
 * generate a framed greeting
 * from a program that asks the user to
 * supply the amount of spacing to leave
 * between the frame and the greeting.
 *
 * The revised program instead of writing mostly blank lines separating
 * the borders from the greeting one character at a time. It writes all
 * the spaces needed in a single output expression.
 */
using namespace std;

int main()
{
    cout << "Name: ";
    string name;
    getline(cin, name);

    // build greeting message
    string greeting = "Hello, " + name + "!";
    string spaces(greeting.size(), ' ');

    //const int pad = 1;

    cout << "Top and Bottom Spacing:";
    int tb_pad;
    cin >> tb_pad;
    tb_pad *= 2;

    const int rows = tb_pad + 3;

    cout << "Side Spacing:";
    string::size_type side_pad;
    cin >> side_pad;
    side_pad *= 2;

    string::size_type cols = greeting.size() + side_pad + 2;

    cout << endl;

    for(int r = 0; r != rows; ++r) {
        for(string::size_type c = 0; c !=cols; ++c) {
            if(r == (tb_pad/2) + 1 &&
                    c == (side_pad/2) + 1) {
                cout << greeting;
                c += greeting.size();
            }
            if((r != 0 && r != (tb_pad/2) + 1 && r != rows-1)
                    && c == (side_pad/2)+1) {
                cout << spaces;
                c += spaces.size() - 1;
            }
            else {
                if(r == 0 || r == rows - 1 ||
                        c == 0 || c == cols - 1)
                    cout << "*";
               else {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}
