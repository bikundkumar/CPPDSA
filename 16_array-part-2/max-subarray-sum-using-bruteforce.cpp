#include <climits>
#include <iostream>
using namespace std;

void MaxSumSubarraySum(int arr[], int n) {
    int maxSum = INT_MIN;

    for (int  start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            int currSum = 0;
            for (int i = start; i <= end; i++) {
                currSum += arr[i];
            }
            cout << currSum << ",";
            maxSum = max(maxSum, currSum);
        }
        cout << endl;
    }
    cout << "maximum subarray sum = " << maxSum << endl;
}

int main() {
    int arr[] = {3,6,7,2,7,3};
    int n = sizeof(arr) / sizeof(int);

    MaxSumSubarraySum(arr,n);

    return 0;
}
