#include <iostream>
using namespace std;

void printSubarrays(int arr[], int lenth) {
    for (int start = 0; start < lenth; start++) {
        for (int end = start; end < lenth; end++) { 
            for (int i = start; i <= end; i++) {
                cout << arr[i];
            }
            cout <<", ";
        }
        cout << endl;
    }
}

int main() {
    int arr[] = {1,2,3,4,5};
    int lenth = sizeof(arr) / sizeof(int);

    printSubarrays(arr,lenth);


    return 0;
}