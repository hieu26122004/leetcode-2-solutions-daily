#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
    int ans = nums[0] + nums[1] + nums[2];
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for (int i=0; i<n-2; i++) {
        int j = i + 1;
        int k = n-1;
        while (j < k) {
            int sum = nums[i] + nums[j] + nums[k];
            if (abs(target - sum) < abs(target - ans)) {
                ans = sum;
            }
            if (sum > target) {
                k --;
            } else if (sum < target) {
                j ++;
            } else {
                return ans;
            }
        }
    }
    return ans;
}

int main() {


    return 0;
}
