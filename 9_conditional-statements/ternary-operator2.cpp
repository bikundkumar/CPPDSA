#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string Odd_Even = (n % 2 == 0) ? "Even" : "Odd";
    cout << Odd_Even << endl;

    return 0;
}