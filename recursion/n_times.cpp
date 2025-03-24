#include <iostream>
using namespace std;

int cnt = 0;
void print1() {
    if (cnt == 4) {
        return;
    }
    cout << cnt << endl;
    cnt++;
    print1();
}

int n = 0;

void print2() {
    if (n == 4) {
        return;
    }
    cout <<"recursive call\n";
    n++;
    print2();
}

int main() {
    
    // print1(); 
    print2();
}