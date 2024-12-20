#include <iostream>
#include <cstring>
using namespace std;

void toUpper(char str[], int n) {
    for (int i = 0; i < n; i++) {
        char ch = str[i];

        if (ch >= 'A' && ch <= 'Z') {
            continue;
        } else {
            int diff = str[i] - 'a';
            str[i] = 'A' + diff;
        }
    }
}

int main() {
    char str[] = "adBcK";  

    toUpper(str, strlen(str));

    cout << str << endl;

    return 0;
}
