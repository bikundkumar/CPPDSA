#include <iostream>
using namespace std;

int search_key(int arr[],int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {4,6,7,3,1,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 3;

    cout << search_key(arr, n, key) << endl;

    return  0;
}
