#include <bits/stdc++.h>
using namespace std;

void maxSubarraySum3(int arr[], int length) {
    int maxSum = INT_MIN;
    int currSum = 0;

    for (int i = 0; i < length; i++) {
        currSum = currSum + arr[i];
        maxSum = max(currSum, maxSum);
        if (currSum < 0) {
            currSum = 0;
        }
    }
    cout << "maximum subarray sum = " << maxSum << endl;
}
int main() {
    int arr[] = {2,-3,6,-5,4,2};
    int length = sizeof(arr) / sizeof(int);

    maxSubarraySum3(arr, length);

    return 0;
}