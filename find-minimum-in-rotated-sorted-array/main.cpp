#include <iostream>
#include <vector>

using namespace std;

int util(vector<int>& nums, int left, int right) {
    if (left == right) return nums[left];
    int mid = left + (right - left) / 2;
    if (nums[mid] < nums[right]) {
        return util(nums, left, mid);
    } else {
        return util(nums, mid+1, right);
    }
}

int findMin(vector<int>& nums) {
    return util(nums, 0, nums.size()-1);
}

int main() {


    return 0;
}
