#include <iostream>
using namespace std;

int binSearch(int arr[], int n, int key) {
    int start = 0, end = n - 1;

    while(start <= end) {
        int mid = (start + end) / 2;

        if(key == arr[mid]) {
            return mid;
        }
        else if(key > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid -1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {4,6,9,10};
    int n = sizeof(arr) / sizeof(int);
    int key = 0;

    cout << binSearch(arr, n, key) << endl;
}
