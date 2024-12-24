#include <iostream>
using namespace std;

int main() {
    int Binary_Num;
    cout << "Enter Binary number : ";
    cin >> Binary_Num;

    int decimal_num = 0;
    int pow = 1;

    while (Binary_Num > 0) {
        int lastDig = Binary_Num % 10;
        decimal_num += lastDig * pow;
        pow = pow * 2;
        Binary_Num = Binary_Num / 10;
    }
    cout <<decimal_num << endl;
}
