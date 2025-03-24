#include <iostream>
using namespace std;

void number(int i, int n) {
    if (i > n) {
        return;
    }
    cout << i << " ";
    i++;
    number(i, n);
    
}

int main() {
    int i = 1;
    int n;
    cin >> n;
    number(i, n);
}