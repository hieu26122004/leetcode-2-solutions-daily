#include <iostream>
#include <vector>

using namespace std;

bool binarySearch(vector<int>& nums, int target, int left, int right) {
    if (left > right) {
        return false;
    }
    int mid = left + (right -  left) / 2;
    if (nums[mid] == target) {
        return true;
    }
    if (nums[mid] == nums[left] && nums[mid] == nums[right]) {
        return binarySearch(nums, target, left + 1, right - 1);
    }
    if (nums[mid] <= nums[right]) {
        if (target > nums[mid] && target <= nums[right]) {
            return binarySearch(nums, target, mid + 1, right);
        } else {
            return binarySearch(nums, target, left, mid - 1);
        }
    } else {
        if (target >= nums[left] && target < nums[mid]) {
            return binarySearch(nums, target, left, mid - 1);
        } else {
            return binarySearch(nums, target, mid + 1, right);
        }
    }
}

bool search(vector<int>& nums, int target) {
    return binarySearch(nums, target, 0, nums.size() - 1);
}

int main() {


    return 0;
}
