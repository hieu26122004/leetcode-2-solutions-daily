#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int right = nums.size() - 1;
        int left = 0;
        while (left < right) {
            if (nums[left] % 2 == 0) {
                left ++;
            }
            if (nums[right] % 2 != 0) {
                right --;
            }
            if (left < right && nums[left] % 2 != 0 && nums[right] % 2 == 0) {
                swap(nums[left ++], nums[right --]);
            }
        }
        return nums;
    }
};

int main() {


    return 0;
}
