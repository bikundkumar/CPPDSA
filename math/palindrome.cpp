#include <iostream>
using namespace std;

int main() {
    int n = 445;

    int revnum = 0;
    int temp = n;
    while (n > 0) {
        int ld = n % 10;
        revnum = (revnum * 10) + ld;
        n = n / 10;
    }
    if (temp == revnum) {
        cout <<"true\n";
    }
    else {
        cout <<"false\n";
    }
}