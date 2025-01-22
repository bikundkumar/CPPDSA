#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;

    cout <<"enter a : ";
    cin >> a;
    cout <<"enter b : ";
    cin >> b;
    cout <<"enter operator : ";
    cin >> op;

    if (op == '+') {
        cout <<  a + b << endl;
    }
    else if (op == '-') {
        cout << a - b << endl;
    }
    else if (op == '*') {
        cout << a * b << endl;
    }
    else if (op == '/') {
        cout << a / b << endl;
    }
    else {
        cout <<"invalid operator\n";
    }
}