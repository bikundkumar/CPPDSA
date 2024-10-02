#include <iostream>
using namespace std;

void printArr(int arr[], int length) {

    for (int i = 0; i < length; i++) {
        cout << arr[i] << endl;
    }
}

int main() {
    int arr[] = {5,4,3,9,2};
    int length = sizeof(arr) / sizeof(int);

    int copyArr[length];

    for (int i = 0; i < length; i++) {
        int j = length-i-1;
        copyArr[i] = arr[j]; // {2,9,3,4,5}
                       // index  0,1,2,3,4   
    }

    for(int i = 0; i < length; i++) {
        arr[i] = copyArr[i];               
    }

    printArr(arr,length);

    return 0;
}