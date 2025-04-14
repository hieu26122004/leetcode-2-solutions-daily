#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int>& nums, int left, int right, int target) {
    if (left > right) {
        return -1;
    }
    int mid = left + (right - left) / 2;
    if (nums[mid] == target) {
        return mid;
    }
    if (nums[mid] < nums[right]) {
        if (target > nums[mid] && target <= nums[right]) {
            return binarySearch(nums, mid, right, target);
        } else {
            return binarySearch(nums, left, mid, target);
        }
    } else {
        if (target >= nums[left] && target < nums[mid]) {
            return binarySearch(nums, left, mid, target);
        } else {
            return binarySearch(nums, mid, right, target);
        }
    }
}

int search(vector<int>& nums, int target) {
    return binarySearch(nums, 0, nums.size() - 1, target);
}

int main() {
    vector<int> test = { 4,5,6,7,0,1,2 };
    int target = 0;
    cout << search(nums, target);

    return 0;
}
