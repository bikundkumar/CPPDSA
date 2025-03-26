#include <algorithm>
#include <iostream>
using namespace std;

// Extra Space
void rev(int arr[], int n) {
    int copyArr[n];

    for (int i = 0; i < n; i++) {
        int j = n-i-1;
        copyArr[j] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = copyArr[i];
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// Without Extra Space
void rev1(int arr[], int n) {
    int st = 0, end = n -1;

    while (st < end) {
        swap(arr[st], arr[end]);
        st++;
        end--;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// 
void rev2(int i,int arr[], int n) {
    if (i >= n/2) {
        return;
    }
    swap(arr[i], arr[n-i-1]);
    rev2(i+1, arr,  n);
}

int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);

    // // rev(arr, n); 
    // // rev1(arr, n);
    rev2(0, arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}