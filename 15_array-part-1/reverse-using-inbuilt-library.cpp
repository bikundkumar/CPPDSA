#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {3,2,7,4,8,5};
    int n = sizeof(arr)/ sizeof(int);

    reverse(arr, arr+n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}