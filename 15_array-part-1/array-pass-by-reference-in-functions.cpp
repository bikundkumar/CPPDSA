#include <iostream>
using namespace std;

void passby(int arr[], int lenth) {

    for (int i = 0; i < lenth; i++) {
        cout << arr[i] <<" \n";
    }
}

int main() {
    int arr[] = {3,5,6,3,6,3};
    int lenth = sizeof(arr) / sizeof(int);

    passby(arr,lenth);

    return 0;
}