#include <iostream>
using namespace std;

void print(int n) {
    // Base case
    if (n == 3) {
        return;      // Stop recursion
    }
    // Recursive step
    cout << n << endl;
    n++;
    
    print(n);
}

int main() {
    int n = 1;

    print(n);

    return 0;
}