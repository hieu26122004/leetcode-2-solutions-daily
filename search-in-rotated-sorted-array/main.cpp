#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int>& nums, int left, int right, int target) {
    if (left > right) {
        return -1;
    }
    int mid = (right - left) / 2;
    if (nums[mid] == target) {
        return mid;
    } else {
        return nums[right] < target ? binarySearch(nums, left, mid, target) : binarySearch(nums, mid, right, target);
    }
}

int search(vector<int>& nums, int target) {
    return binarySearch(nums, 0, nums.size(), target);
}

int main() {


    return 0;
}
