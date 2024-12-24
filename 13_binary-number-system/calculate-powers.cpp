#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int base, exponent;
    cout << "enter base : ";
    cin >> base;
    cout << "enter exponent : ";
    cin >> exponent;

    cout << pow(base, exponent) << endl;

    return 0;
}
