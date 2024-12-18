#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int arr[] = {4,3,2,1};
    int n = sizeof(arr) / sizeof(int);

    sort(arr, arr+n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
