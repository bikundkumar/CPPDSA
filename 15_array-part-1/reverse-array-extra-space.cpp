#include <iostream>
using namespace std;

void printArr(int arr[], int lenth) {

    for (int i = 0; i < lenth; i++) {
        cout << arr[i] << endl;
    }
}

int main() {
    int arr[] = {5,4,3,9,2};
    int lenth = sizeof(arr) / sizeof(int);

    int copyArr[lenth];

    for (int i = 0; i < lenth; i++) {
        int j = lenth-i-1;
        copyArr[i] = arr[j]; // {2,9,3,4,5}
                       // index  0,1,2,3,4   
    }

    for(int i = 0; i < lenth; i++) {
        arr[i] = copyArr[i];               
    }

    printArr(arr,lenth);

    return 0;
}