#include <iostream>
using namespace std;

int main() {
    int decimal_Num;
    cout << "Enter Decimal number: ";
    cin >> decimal_Num;

    int binary_Num = 0;
    int pow = 1;

    while (decimal_Num > 0) {
        int lastDigit = decimal_Num % 2;
        binary_Num += lastDigit * pow;
        pow = pow * 10;
        decimal_Num = decimal_Num / 2;
    }

    cout << "Binary equivalent: " << binary_Num << endl;

    return 0;
}
