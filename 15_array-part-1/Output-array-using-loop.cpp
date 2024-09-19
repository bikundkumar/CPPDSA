#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1,5,6,7,3,73};
    int lenth = sizeof(arr) / sizeof(int);

    for (int i = 0; i < lenth; i++) {
        cout << arr[i];
        cout << endl;
    }

    return 0;
}