#include <iostream>
using namespace std;

void printInsertion(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void insertion_Sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int curr = arr[i];
        int prev = i-1;
        while (prev >= 0 && arr[prev] > curr) {
            swap (arr[prev], arr[prev+1]);
            prev--;
        }
        arr[prev+1] = curr;
    }
}

int main() {
    int arr[] = {3,1,9,6};
    int n = sizeof(arr) / sizeof(int);

    insertion_Sort(arr, n);
    printInsertion(arr, n);

    return 0;
}