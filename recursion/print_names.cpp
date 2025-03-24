#include <iostream>
using namespace std;

void names(int n) {
    if ( n == 5) {
        return;
    }
    cout <<"lenovo keep running\n";
    n++;
    names(n);
}
void names1(int n, int i) {
    if (i > n) {
        return;
    }
    cout <<"optimize recursive\n";
    i++;
    names1(n, i);
}

int main() {

    names(0);
    int n;
    cin >> n;
    int i = 1;
    names1(n, i);
}