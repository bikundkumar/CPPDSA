#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"enter lenth of array : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cout <<"enter arr : " << i <<" : ";
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}