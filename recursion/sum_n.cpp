#include <iostream>
using namespace std;

void sumofn(int i, int sum) {
    if (i < 1) {
        cout << sum << endl;
        return;
    }
    sumofn(i-1, sum+i);
}

int main() {
    int n;
    cin >> n;

    sumofn(n,0);
}