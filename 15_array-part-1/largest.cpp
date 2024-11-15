#include <iostream>
using namespace std;

int main() {
    int arr[] = {2,4,7,84,6};
    int n = sizeof(arr) / sizeof(int);

    int max = arr[0];
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << max <<" is the largest element is the array\n";

    return 0;
}