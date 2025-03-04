#include <iostream>
using namespace std;

int Addition() {
    int a = 5, b = 10;
    int sum = a + b;

    return sum;
}

void Sum() {
    int a = 20, b = 30;
    // cout << a + b << endl;
    int sum = a + b;
    cout << sum << endl;
}

int main() {
    cout << Addition() << endl;
    Sum();
}