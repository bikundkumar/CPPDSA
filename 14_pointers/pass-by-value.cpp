#include <iostream>
using namespace std;

void ChangeA(int a) {
    a  = 20;
    cout << a << endl;  // 20 
}

int main() {
    int a = 10;
    ChangeA(a);

    cout << a << endl;  // 10 

    return 0;
}