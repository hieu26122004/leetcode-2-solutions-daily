#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int even = 0, odd = 1, n = nums.size();
        while (even < n && odd < n) {
            while (even < n && nums[even] % 2 == 0) even += 2;
            while (odd < n && nums[odd] % 2 == 1) odd += 2;
            if (even < n && odd < n) {
                swap(nums[even], nums[odd]);
            }
        }
        return nums;
    }
};


int main() {


    return 0;
}
