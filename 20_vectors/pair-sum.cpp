#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int st = 0, end = nums.size() - 1;
    vector<int> ans;

    while (st < end) {
        int sum = nums[st] + nums[end];
        if (sum == target) {
            ans.push_back(st + 1);
            ans.push_back(end + 1);
            break;
        } else if (sum > target) {
            end--;
        } else {
            st++;
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    cout << result[0] << " " << result[1] << endl;

    return 0;
}
