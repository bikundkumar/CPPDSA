#include <bits/stdc++.h>
using namespace std;

int largest1(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[] = {2, 5, 1, 3, 0, 9};
    int n = sizeof(arr) / sizeof(int);

    cout << largest1(arr, n);

    cout << endl;
}