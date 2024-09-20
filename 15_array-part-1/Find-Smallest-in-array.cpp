#include <iostream>
using namespace std;

int main() {
    int arr[] = {3,5,7,3,1,6};
    int lenth = sizeof(arr) / sizeof(int);
    int min = arr[0];

    for (int i = 0; i < lenth; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    cout <<"Smallest number is : " << min << endl;

    return 0;
}