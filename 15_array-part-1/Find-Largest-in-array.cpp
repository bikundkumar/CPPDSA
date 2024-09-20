#include <iostream>
using namespace std;

int main() {
    int arr[] = {5,4,3,9,12};
    int lenth = sizeof(arr) / sizeof(int);
    int max = arr[0];

    for (int i = 0; i < lenth; i++) {
        if (arr[i] > max) {
            max = arr[i];  
        }
    }
    cout <<"Largest number is : " << max << endl;  

    return 0;
}