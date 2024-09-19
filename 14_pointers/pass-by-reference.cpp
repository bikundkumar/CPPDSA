#include <iostream>
using namespace std;

void ChangeA(int &a) {
    a = 20;
    cout << a << endl;
}

int main() {
    int a = 10;
    ChangeA(a);
    cout << a << endl;

    return 0;
}