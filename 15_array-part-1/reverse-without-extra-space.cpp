#include <iostream>
using namespace std;

int main() {
    int arr[] = {5,3,4,2};
    int n = sizeof(arr) / sizeof(int);

    int start = 0, end = n - 1;

    while(start < end) {
        // swap function
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] <<" ";
    }
    cout << endl;

    return 0;
}
