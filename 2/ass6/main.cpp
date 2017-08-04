#include <iostream>

using namespace std;
/**
 * @brief main
 * countdown from 10 to -5
 * generate the product of numbers in range [1,10]
 * tells the greater number between two numbers
 * @return
 */
int main() {
    for(int i =10; i != -6; --i) {
        cout << i << endl;
    }
    for(int i = 1; i != 10; ++i) {
        int j = i + 1;
        cout << i << "*" << j << "=" << i*j << endl;
    }

    cout << "Please enter two numbers!\n";
    cout << "I: ";
    int a;
    cin >> a;
    cout << "II: ";
    int b;
    cin >> b;

    if(a > b)
        cout << a << " > " << b;
    else if(a < b)
        cout << b << " > " << a;
    else
        cout << "equal numbers";
    cout << endl;

    return 0;
}
