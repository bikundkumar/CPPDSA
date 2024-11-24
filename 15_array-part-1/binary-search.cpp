#include <iostream>
using namespace std;

int binSearch(int arr[], int n, int key) {
    int start = 0, end = n - 1;

    while(start < n) {
        int mid = (start + end) /2;

        if(arr[mid] == key) {
            return mid;
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}
int main() {
    int arr[] = {4,9,10,20,40};
    int n = sizeof(arr) / sizeof(int);
    int key = 10;

    cout << binSearch(arr,n,key) << endl;

    return 0;
}
