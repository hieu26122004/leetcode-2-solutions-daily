#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int ans = 0;
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = 1;
        int n = nums.size();
        while (i < n && j < n) {
            int res = nums[j] - nums[i];
            if (i == j || res < k) {
                j ++;
            } else if (res > k) {
                i ++;
            } else {
                ans ++;
                while (j < n - 1 && nums[j] == nums[j+1]) {
                    j ++;
                }
                while (i < n - 1 && nums[i] == nums[i+1]) {
                    i ++;
                }
                i ++;
                j ++;
            }
        }
        return ans;
    }
};

int main() {


    return 0;
}
