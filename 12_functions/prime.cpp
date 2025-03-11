#include <iostream>
using namespace std;

bool PrimeNumber(int n) {
    if (n == 1) {
        return false; // 1 prime number nahi hai (non-prime)
    }
    for (int i = 2; i <= n-1; i++) {
        if (n % i == 0) {
            return false;  //  prime number nahi hai (non-prime)
        }
    }
    return true;  //  prime number hai
}

int main() {
    int n = 7;
    // cout <<"enter n: ";
    // cin >> n;

    cout << PrimeNumber(n) << endl;

    return 0;
}