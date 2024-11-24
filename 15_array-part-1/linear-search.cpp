#include <iostream>
using namespace std;

int search_linear(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {4,3,8,5,9};
    int n = sizeof(arr) / sizeof(int);
    int key = 8;

    cout << search_linear(arr,n,key) << endl;
}
