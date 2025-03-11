#include <iostream>
using namespace std;

void first(int a, int b) {
    int sum = a + b;
    cout << sum << endl;
}

int second(int a, int b) {
    int sum = a + b;

    return sum;
}

int main() {
    int a = 34, b = 6;
    first(a, b);
    cout << second(a,b) << endl;

    return 0;
}