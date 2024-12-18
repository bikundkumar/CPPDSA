#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1,2,3,4};
    int n = sizeof(arr) / sizeof(int);

    sort(arr, arr+n, greater<int>());

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
