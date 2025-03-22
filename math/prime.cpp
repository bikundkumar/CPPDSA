#include <iostream>
using namespace std;

int main() {
    int n = 7;
    int cnt = 0;

    for (int i = 1; i <= n; i++) {
        if (n%i == 0) {
            cnt++;
        }
    }
    if (cnt == 2) {
        cout <<"prime number: "<< n << endl;
    }
    else {
        cout <<"not prime number: " << n << endl;
    }
}