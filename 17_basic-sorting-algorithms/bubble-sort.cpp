#include <iostream>
using namespace std;

void printSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubble_Sort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {
    int arr[] = {4, 6, 8, 3};
    int n = sizeof(arr) / sizeof(int);    

    bubble_Sort(arr, n);
    cout <<"Sorted array : ";
    printSort(arr, n);

    return 0;
}
