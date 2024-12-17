#include <climits>
#include <iostream>
using namespace std;

void maxSumSubarray(int arr[], int n) {
    int maxSum = INT_MIN;

    for (int start = 0; start < n; start++) {
        int sum = 0;
        for (int i = start; i < n; i++) {
            sum += arr[i];
            maxSum = max(sum, maxSum);
        }
    }
    cout << maxSum <<"\n";
}

int main() {
    int arr[] = {4,8,3,8,3,6};
    int n = sizeof(arr) / sizeof(int);

    maxSumSubarray(arr,n);

    return 0;
}
