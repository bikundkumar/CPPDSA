#include <iostream>
using namespace std;

int main() {
    int n = 153;
    int dup = n;
    int sum = 0;
    
    while (n > 0) {
        int ld = n % 10; // 5
        sum = sum + (ld*ld*ld);
        n = n / 10;  
    }
    if (sum == dup) {
        cout <<"Armstrong\n";   
    }
    else {
        cout <<"Not Armstrong\n";
    }
}