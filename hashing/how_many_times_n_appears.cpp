#include <iostream>
using namespace std;
// Brute Force approach
int number(int arr[], int n, int in)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == in)
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    int arr[] = {1, 2, 1, 2, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    int in;
    cin >> in;

    cout << number(arr, n, in) << endl;
}