#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for (int left=0; left<n-2; left++) {
        if (left > 0 && nums[left] == nums[left-1]) continue;
        int right = n - 1;
        int nextLeft = left + 1;
        int sum = nums[left] + nums[nextLeft] + nums[right];
        while (nextLeft < right) {
            int sum = nums[nextLeft] + nums[right] + nums[left];
            if (sum == 0) {
                vector<int> tmp = { nums[left], nums[nextLeft], nums[right] };
                ans.push_back(tmp);
                while (nextLeft < right && nums[nextLeft] == nums[nextLeft+1]) nextLeft ++;
                while (nextLeft < right && nums[right] == nums[right-1]) right --;
                nextLeft ++;
                right --;
            } else if (sum > 0) {
                right --;
            } else {
                nextLeft ++;
            }
        }
    }
    return ans;
}

int main() {


    return 0;
}
