#include <iostream>
using namespace std;

int main() {
    int arr[] = {5,7,4,3,8,7};
    int n = sizeof(arr) / sizeof(int);

    int copyArr[n];

    for (int i = 0; i < n; i++) {
        int j = n-i-1;
        copyArr[i] = arr[j];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = copyArr[i];
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] <<" ";
    }
    cout << endl;
}