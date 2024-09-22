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

    int start = 0, end = lenth - 1;

    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--; 
    }
    printArr(arr,lenth);

    return 0;
}