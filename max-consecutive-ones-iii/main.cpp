#include <iostream>
#include <vector>

using namespace std;


int longestOnes(vector<int>& nums, int k) {
    int ans = 0;
    int left = 0;
    int right = 0;
    int length = 0;
    while (right < nums.size()) {
        if (nums[right] == 0) {
            k --;
        }
        while (k<0) {
            if (nums[left] == 0) {
                k ++;
            }
            left ++;
            length --;
        }
        right ++;
        length ++;
        ans = max(ans, length);
    }
    return ans;
}

int longestOnes(vector<int> &nums, int k) {
    int left = 0;
    for (int right=0; right < nums.size(); right++) {
        if (nums[right] == 0) {
            k --;
        }
        if (k < 0) {
            if (nums[left] == 0) {
                k ++;
            }
            left ++;
        }
    }
    return right - left;
}

int main() {
    vector<int> nums = { 1, 1, 0, 0, 0, 0, 0 };
    cout << longestOnes(nums, 3);

    return 0;
}
