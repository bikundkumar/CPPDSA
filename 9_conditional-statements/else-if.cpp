#include <iostream>
using namespace std;

int main() {
    int a = 20, b = 20, c = 20;

    if (a > b && a > c) {
        cout <<"largest is A " << a << endl;
    }
    else if (b > c) {
        cout <<"largest is B " << b << endl; 
    }
    else {
        cout <<"largest is C " << c << endl;
    }
}