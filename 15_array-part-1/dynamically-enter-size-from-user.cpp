#include <iostream>
using namespace std;

int main() {
    int size;
    cin >> size;

    int arr[size];

    // input from user 
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        
    }

    // output the value 
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl; 

    return 0;
}
