#include <iostream>
#include <cstring>

using namespace std;

void reverse(char str[], int n) {
    int st = 0, end = n - 1;

    while (st < end) {
        swap(str[st], str[end]);
        st++;
        end--;
    }
}

int main() {
    char str[] = "bikund";

    reverse(str, strlen(str));

    cout << "reverse = " << str << endl;   
}