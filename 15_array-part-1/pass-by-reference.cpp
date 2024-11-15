#include <iostream>
using namespace std;

void func(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr[] = {64,7,74,643,84,73,36};
    int n = sizeof(arr) / sizeof(int);

    func(arr,n);

    return 0;
}