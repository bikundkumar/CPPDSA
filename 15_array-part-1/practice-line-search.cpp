#include <iostream>
using namespace std;

int search(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {4,8,3,9,1,10};
    int n = sizeof(arr) / sizeof(int)
    int key = 9;

    cout << search(arr,n,key) << endl;
}
