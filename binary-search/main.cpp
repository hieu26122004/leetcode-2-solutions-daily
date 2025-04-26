#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int>& nums, int left, int right, int target) {
    if (left > right) return -1;
    int mid = left + (right - left) / 2;
    if (nums[mid] ==  target) return mid;
    return nums[mid] > target ? binarySearch(nums, left, mid - 1, target) : binarySearch(nums, mid + 1, right, target);
}

int search(vector<int>& nums, int target) {
    return binarySearch(nums, 0, nums.size() - 1, target);
}

int main() {


    return 0;
}
