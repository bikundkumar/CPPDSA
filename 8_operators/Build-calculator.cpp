#include <iostream>
using namespace std;

int main() {
    float a, b; // Changed to float for decimal precision
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    char ch;
    cout << "Enter operator (+, -, *, /): ";
    cin >> ch;

    switch (ch) {
        case '+':
            cout << "Result: " << a + b << endl;
            break;
        case '-':
            cout << "Result: " << a - b << endl;
            break;
        case '*':
            cout << "Result: " << a * b << endl;
            break;
        case '/':
            if (b != 0) {
                cout << "Result: " << a / b << endl;
            } else {
                cout << "Error: Division by zero is undefined." << endl;
            }
            break;
        default:
            cout << "Invalid operator" << endl;
    }

    return 0;
}
