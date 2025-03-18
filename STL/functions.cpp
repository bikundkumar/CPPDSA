#include <iostream>
using namespace std;

void print() {
    cout <<"Bikund\n";
}

int sum(int a, int b) {
    return a + b;
}

int main() {
    print();
    int s = sum(1,5);
    cout << s << endl;
}