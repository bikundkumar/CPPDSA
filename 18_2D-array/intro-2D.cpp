#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = { {70,60,50},
                      {85,74,89},
                      {63,72,65}};

    cout << arr[2][2] << endl;   // Row 3, Column 3
    cout << arr[2][0] << endl;   // Row 3, Column 1 

    cout << "Student 1" << endl;
    cout << "Science : " << arr[2][0] << endl;
    cout << "Math    : " << arr[2][1] << endl;
    cout << "English : " << arr[2][2] << endl;

    return 0;
}
