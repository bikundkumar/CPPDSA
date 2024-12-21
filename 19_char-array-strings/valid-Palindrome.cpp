#include <cstring>
#include <iostream>
using namespace std;

bool isPalindrome(char str[], int n) {
    int st = 0, end = n - 1;

    while (st < end) {
        if (str[st++] != str[end--]) {
            cout << "not valid\n";
            return false;
        }
    }
    cout << "valid";
    return true;
}

int main() {
    char str[] = "madam";

    isPalindrome(str, strlen(str));

    return 0;
}
