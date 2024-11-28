#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int start = 0, end = n - 1;

    while(start <= end) {
        int mid = (start + end) / 2;

        if(arr[mid] == key) {
            return mid;
        }
        else if(arr[mid] < key) {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {3,5,8,9,10,20};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cout <<"Enter key for Search index : ";
    cin >> key;

    cout << binarySearch(arr,n,key) << endl;

    return 0;
}
