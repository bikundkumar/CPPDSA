#include <iostream>
using namespace std;

int trap(int *heights, int n) {
    int maxLeft[100000] = {0};
    int maxRight[100000] = {0};

    int maxTillNow = heights[0];
    for(int i=1; i<n; i++) {
        maxLeft[i] = max(maxTillNow, heights[i-1]);
        maxTillNow = max(maxTillNow, heights[i]);
    }

    maxRight[n-1] = 0;
    maxTillNow = heights[n-1];
    for(int i=n-2; i>=0; i--) {
        maxRight[i] = max(maxTillNow, heights[i+1]);
        maxTillNow = max(maxTillNow, heights[i]);
    }

    int water = 0;
    for(int i=0; i<n; i++) {
        int ht = min(maxLeft[i], maxRight[i]) - heights[i];
        if(ht > 0) {
            water += ht;
        }
    }

    cout << "water trapped = " << water << "\n";
    return water;
}

int main() {
    int heights[] = {4,2,0,6,3,2,5};
    int n = sizeof(heights) / sizeof(int);

    trap(heights, n);

    return 0;;
}
