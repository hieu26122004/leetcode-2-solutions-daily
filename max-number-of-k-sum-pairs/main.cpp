#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int maxOperations(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    int left = 0;
    int right = nums.size() - 1;
    int ans = 0;
    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == k) {
            ans ++;
            left ++;
            right --;
        } else if (sum > k) {
            right --;
        } else if (sum < k) {
            left ++;
        }
    }
    return ans;
}

int main() {


    return 0;
}
