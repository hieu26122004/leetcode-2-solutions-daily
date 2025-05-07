#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /* 2,6,8,4,10,9,15,17,20 */
    int findUnsortedSubarray(vector<int>& nums) {
        int minVal = INT_MAX;
        int maxVal = INT_MIN;
        int n = nums.size();
        for (int i=1; i<n; i++) {
            if (nums[i] < nums[i-1]) minVal = min(minVal, nums[i]);
        }
        for (int i=n-2; i>=0; i--) {
            if (nums[i] > nums[i+1]) maxVal = max(maxVal, nums[i]);
        }
        if (minVal == INT_MAX && maxVal == INT_MIN) return 0;
        int left = 0;
        int right = n-1;
        while (left < n && nums[left] <= minVal) {
            left ++;
        }
        while (right >= 0 && nums[right] >= maxVal) {
            --right;
        }
        return right - left + 1;
    }
};

int main() {


    return 0;
}
