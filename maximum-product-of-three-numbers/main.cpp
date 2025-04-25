#include <iostream>
#include <vector>

using namespace std;

int maximumProduct(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    return max(nums[0] * nums[1] * nums[n-1], nums[n-1] * nums[n-2] * nums[n-3]);
}

int main() {


    return 0;
}
