// #include <iostream>
// using namespace std;

// int linear_search(int arr[], int n, int key) {
//     for (int i = 0; i < n; i++) {
//         if(arr[i] == key) {
//             return i;
//         }
//     }
//     return -1;
// }

// int main() {
//     int arr[] = {4,6,3,8,4,83,8,3,833,7,3,85,2,75,37,4};
//     int n = sizeof(arr) / sizeof(int);
//     int key = 3;

//     cout << linear_search(arr,n,key) << endl;
    
//     return 0;
// } 

// 2nd Program 

#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int arr[] = {4, 6, 3, 8, 4, 83, 8, 3, 833, 7, 3, 85, 2, 75, 37, 4};
    int n = sizeof(arr) / sizeof(int);
    int key = 37;

    int index = linear_search(arr, n, key);

    if (index != -1) {
        cout << "Value is " << arr[index] << " at index: " << index << endl;
    } else {
        cout << "Key not found!" << endl;
    }

    return 0;
}
