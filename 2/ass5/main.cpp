#include <iostream>
#include <string>

/**
 * Using a set of '*' characters
 * to frame a square, rectangle and triangle.
 */

using namespace std;
typedef  string::size_type sz;

void squareFrame(string::size_type l) {
    const int rows = static_cast<int>(l);
    const string::size_type cols = l*2;

    for(int r = 0; r != rows; ++r) {
        for(string::size_type c = 0; c != cols; ++c) {
            if(r == 0 || r == rows - 1 || c == 0 || c == cols - 2)
                c % 2 == 0 ? cout << "*" : cout << " ";
            else
                cout << " ";
        }
        cout << endl;
    }

}

void recFrame(string::size_type lr, string::size_type br) {
    const int rows = static_cast<int>(lr);
    const string::size_type cols = br * 2;

    for(int r = 0; r != rows; ++r) {
        for(string::size_type c = 0; c != cols; ++c) {
            if(r == 0 || r == rows - 1 || c == 0 || c == cols - 2)
                c % 2 == 0 ? cout << "*" : cout << " ";
            else
                cout << " ";
        }
        cout << endl;
    }
}

void triFrame(sz bt)
{
    // base must be odd
    if(bt % 2 == 0) {
        ++bt;
    }

    sz base = bt;
    sz height = (bt+1)/2;
    sz mid = (base - 1)/2;
    sz i = 0;

    for(sz r = 0; r != height; ++r) {
        for(sz c = 0; c != base; ++c) {
            if(r == height - 1)
                c % 2 == 0 ? cout << "*" : cout << " ";
            else if(r == 0 && c == mid)
                    cout << "*";
            else if(r == 0 && c != mid)
                    cout << " ";
            else {
                if((r > 0 && r < height - 1) &&
                  (c == mid - i || c == mid + i))
                    cout << "*";
                else
                    cout << " ";
            }
        }
        ++i;
        cout << endl;
    }
}

int main() {
    cout << "Square Frame !" << endl;
    cout << "Hi, Enter length of Square: ";
    string::size_type l;
    cin >> l;

    squareFrame(l);

    cout << "Hi, Enter length and breadth of Rectangle (e.g: 5 10): ";
    string::size_type lr;
    string::size_type br;
    cin >> lr >> br;

    recFrame(lr, br);

    cout << "Triangle Frame !" << endl;
    cout << "Hi, enter base length of the triangle: ";
    sz bt;
    cin >> bt;

    triFrame(bt);

    cout << endl;


    return 0;
}
