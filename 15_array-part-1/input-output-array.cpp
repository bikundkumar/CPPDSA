#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int lenth = sizeof(arr) / sizeof(int);

    for (int i = 0; i < lenth; i++) {
        cout <<"enter arr " << i << " : ";
        cin >> arr[i];
    }

    for (int i = 0; i < lenth; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}