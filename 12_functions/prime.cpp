#include <iostream>
using namespace std;

int PrimeNumber(int n) {
    if (n == 1) {
        return false;
    }
    for (int i = 2; i <= n-1; i++) {
        if (n % i == 0) {
            return false;  //  non-prime
        }
    }
    return true;
}

int main() {
    int n;
    cout <<"enter n: ";
    cin >> n;

    cout << PrimeNumber(n) << endl;
}