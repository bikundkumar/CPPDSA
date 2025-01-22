#include <iostream>
using namespace std;

int main() {
    int n = 13; 
    bool isPrime = true;    

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if(isPrime == true) {
        cout <<"Prime number \n";
    }
    else {
        cout <<"Not Prime number\n";
    }

    return 0;
}