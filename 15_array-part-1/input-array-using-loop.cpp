#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int lenth = sizeof(arr) / sizeof(int);

    for (int i = 0; i < lenth; i++) {
        cout <<"enter arr " << i <<" : ";
        cin >> arr[i];
    }

    return 0;
}