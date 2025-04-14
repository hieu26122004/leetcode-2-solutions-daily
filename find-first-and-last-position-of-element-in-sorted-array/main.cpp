#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(vector<int> nums, int left, int right, int target) {
    if (left > right) return -1;
    int mid = left + (right - left) / 2;
    if (nums[mid] == target) return mid;
    return nums[mid] > target ? binarySearch(nums, left, mid - 1, target) : binarySearch(nums, mid + 1, right, target);
}

vector<int> searchRange(vector<int>& nums, int target) {
    int index = binarySearch(nums, 0, nums.size() - 1, target);
    if (index == -1) return { -1, -1 };
    int left = index;
    int right = index;
    while (left > 0 && nums[left-1] == target) {
        left --;
    }
    while (right < nums.size()-1 && nums[right+1] == target) {
        right ++;
    }
    return { left, right };
}

int main() {


    return 0;
}
