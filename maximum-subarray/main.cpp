#include <iostream>
#include <vector>

using namespace std;

int maxSubArray(vector<int>& nums) {
    int ans = nums[0];
    int current = nums[0];
    for (int i=1; i<nums.size(); i++) {
        if (current < 0) {
            current = nums[i];
        } else {
            current += nums[i];
        }
        ans = max(current, ans);
    }
    return ans;
}

int main() {


    return 0;
}
