#include <iostream>
#include <math.h>
using namespace std;

// Brute Force Approach     
int countDigit_Brute(int n) {
    int cnt = 0;

    while (n > 0) {
        cnt ++;
        int lastdigit = n % 10;
        n = n / 10;
    }
    return cnt;
}
// Optimal Approach 
int countDigit_Optimal(int n) {
    int cnt = (int)(log10(n)+1);

    return cnt;
}

int main() {
    int n = 34576;

    // Brute Force Approach 
    cout << countDigit_Brute(n) << endl;

    // Optimal Approach 
    cout << countDigit_Optimal(n) << endl;

}