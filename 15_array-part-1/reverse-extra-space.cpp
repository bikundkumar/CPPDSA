#include <iostream>
using namespace std;

int main() {
    int arr[] = {3,6,7,2,7,9,5};
    int n = sizeof(arr) / sizeof(int);

    int copyArr[n];

    for(int i = 0; i < n; i++) {
        int j = n-i-1;
        copyArr[j] = arr[i];
    }

    for(int i = 0; i < n; i++) {
        arr[i] = copyArr[i];
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] <<" ";
    }
    cout <<"\n";

    return 0;
}
