#include <iostream>
using namespace std;

int main() {
    int n = 34677;

    int cnt = 0;
    while (n > 0) {
        cnt ++;
        int lastdigit = n % 10;
        n = n / 10;

        cout << lastdigit;
    }
    cout << endl;
    cout << cnt;
    cout << endl;
}