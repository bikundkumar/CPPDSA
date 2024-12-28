#include <iostream>
using namespace std;

void name(int n, int i) {
    if (i > n) {
        return;
    }
    cout <<"Bikund Kumar\n";
    name(n,i+1);
}
int main() {
    int i = 1;
    int n = 5;

    name(n,i);

    return 0;
}