#include <iostream>
using namespace std;

int main() {
    int arr[] = {4,78,4,7,3,7};
    int n = sizeof(arr) / sizeof(int);

    int min = arr[0];

    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i]; 
        }
    }
    cout << min <<" is the lowest element in the array\n";

    return 0;
}