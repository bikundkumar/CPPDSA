#include <iostream>
using namespace std;

int binSearch(int arr[], int lenth, int key) {
    int st = 0, end = lenth -1;

    while (st <= end) {
        int mid = (st + end) / 2;
        if (arr[mid] == key) {
            return mid;
        } 
        else if (arr[mid] < key) {
            st = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return -1;
}


int main() {
    int arr[] = {2,4,6,8,14,15,19};
    int lenth = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;
    
    cout << binSearch(arr, lenth, key) << endl;

    return 0;
}