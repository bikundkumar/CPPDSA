#include <iostream>
using namespace std;

int main() {
    int arr[] = {4,6,2,8};
    int n = sizeof(arr) / sizeof(int);
    int max = arr[0];

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << max << " is the largest element in the array\n";
}
