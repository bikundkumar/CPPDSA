#include <iostream>
using namespace std;

int searchkey(int arr[], int lenth, int key) {

    for (int i = 0; i < lenth; i++) {
        if (arr[i] == key) {
            return i;
        }  
    }
    return -1;
}

int main() {
    int arr[] = {2,4,6,8,10,12,14,16};
    int lenth = sizeof(arr) / sizeof(int);
    int key = 10;

    cout << searchkey(arr,lenth,key) << endl;

    return 0;
}