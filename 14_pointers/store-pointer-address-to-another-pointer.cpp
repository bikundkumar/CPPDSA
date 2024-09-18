#include <iostream>
using namespace std;

int main() {
    int a = 4;
    int *ptr = &a;
    int **pptr = &ptr;

    cout << &a << endl;
    cout << &ptr << endl;
    cout << pptr << endl;

    return 0;
}