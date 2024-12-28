#include <iostream>
using namespace std;

void print(int n) {
    cout << n << endl;

    print(n);   
}

int main() {
    int n = 1;

    print(n);

    return 0;
}