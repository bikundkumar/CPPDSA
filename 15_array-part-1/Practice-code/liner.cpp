#include <iostream>
using namespace std;

int searchKey(int arr[], int lenth, int key) {
    for (int i = 0; i < lenth; i++) {
        if (key == arr[i]) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {34,5,64,6,57,3,7,5,75,36,4,74,636};
    int lenth = sizeof(arr) / sizeof(int);

    int key = 636;

    cout <<"index is : "<<  searchKey(arr,lenth,key) << endl;

    return 0;
}