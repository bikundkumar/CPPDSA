#include <iostream>
using namespace std;

void printSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int minIndex = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap (arr[i], arr[minIndex]);
    }
}

int main() {
    int arr[] = {4,2,7,1};
    int n = sizeof(arr) / sizeof(int);

    selectionSort(arr, n);
    printSort(arr, n);

    return 0;
}