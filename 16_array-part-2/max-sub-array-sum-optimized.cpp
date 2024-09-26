#include <bits/stdc++.h>
using namespace std;

void maxSubarraySum(int arr[], int length) {
    int maxSum = INT_MIN;

    for (int start = 0; start < length; start++) {
        int currSum = 0;
        for (int end = start; end < length; end++) {
            currSum = currSum + arr[end];
            maxSum = max(maxSum, currSum);
        }
    }

    cout <<"maximum subarray sum = " << maxSum << endl;
}
int main() {
    int arr[] = {2,-3,6,-5,4,2};
    int length = sizeof(arr) / sizeof(int);

    maxSubarraySum(arr, length);

    return 0;
}   