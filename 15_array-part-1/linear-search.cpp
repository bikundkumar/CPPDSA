#include <iostream>
using namespace std;

int linear_Search(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {4,3,7,5,9,2};
    int n = sizeof(arr) / sizeof(int);
    int key = 9;

    cout << linear_Search(arr,n,key) << endl;
}
