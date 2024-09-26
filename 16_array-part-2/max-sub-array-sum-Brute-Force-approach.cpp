#include <bits/stdc++.h>
using namespace std;

void maxSubarraySum1(int arr[], int length) {
    int maxSum = INT_MIN;

    for(int start = 0; start < length; start++) {
        for (int end = start; end < length; end++) {
            int currSum = 0;
            for (int i = start; i <= end; i++) {
                currSum = currSum + arr[i];
            }
            cout << currSum << ",";
            maxSum = max(maxSum, currSum);
        }

        cout << endl;
    }
    cout <<"maximum subarray sum = " << maxSum << endl;
}

int main() {
    int arr[] = {2,-3,6,-5,4,2};
    int length = sizeof(arr) / sizeof(int);

    maxSubarraySum1(arr, length);

    return 0;
}