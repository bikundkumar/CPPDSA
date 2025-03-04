#include <iostream>
using namespace std;

void checkOddEven(int num)
{
    if (num % 2 == 0)
    {
        cout << "Even number: " << num << endl;
    }
    else
    {
        cout << "Odd number: " << num << endl;
    }
}

int main()
{
    int num;
    cin >> num;
    checkOddEven(num);
}