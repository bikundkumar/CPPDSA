#include <iostream>
using namespace std;

void print(int n,int i) {
    if (i > n) {
        return;
    }
    cout << i << endl;
    i++;

    print(n,i);
 
}

int main() {
    int i = 1;
    int n = 10;

    print(n,i);

    return 0;
}