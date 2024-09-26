#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {2,-3,6,-5,4,2};
    int length = sizeof(arr) / sizeof(int);

    int maxSum = INT_MIN;

    for (int start = 0; start < length; start++) {
        int currSum = 0;
        for (int end = start; end < length; end++) {
            currSum = currSum + arr[end];
            cout << currSum <<",";
            maxSum = max(maxSum, currSum);
        }
        cout << endl;
    }
    cout <<"maximum subrarray sum = " << maxSum << endl;


    return 0;
}