#include <iostream>
using namespace std;

void func(int (*ptr)[4]) {
    cout << ptr << endl;
    cout << ptr + 1 << endl;

    // Address of rows
    cout << "0th row address: " << ptr << endl;
    cout << "1st row address: " << (ptr + 1) << endl;

    // Start of rows
    cout << "0th row start: " << *ptr << endl;
    cout << "1st row start: " << *(ptr + 1) << endl;

    // Access specific elements
    cout << "(0, 2) = " << *(*ptr + 2) << endl;
    cout << "(1, 2) = " << *(*(ptr + 1) + 2) << endl;
}

int main() {
    int matrix[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};

    func(matrix);

    return 0;
}
