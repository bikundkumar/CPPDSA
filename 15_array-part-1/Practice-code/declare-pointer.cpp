#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *b = &a;

    cout << &b << endl;   // addres 
    cout << &a << endl; // address 
    cout << b << endl;   // address 
    cout << a << endl;
    cout << *b << endl;

    return 0;
}