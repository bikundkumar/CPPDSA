#include <iostream>
using namespace std;

int count(string s, int n, char ch) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == ch) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    string s = "abcdabegc";
    int n = s.length();
    char ch;
    cin >> ch;

    cout << count(s, n, ch) << endl;
}