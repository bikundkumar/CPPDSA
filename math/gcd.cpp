#include <iostream>
using namespace std;

int gcd(int n1, int n2) {
    int gcd = 1;

    for (int i = 1; i <= min(n1, n2); i++) {

        if (n1 % i == 0 && n2 % i == 0) {
            gcd = i;
        }
    }

    return gcd;
}

int main() {
    int n1 = 52, n2 = 10;

    int print = gcd(n1, n2);

    cout << "GCD of " << n1 << " and " << n2 << " is: " << print << endl;
}