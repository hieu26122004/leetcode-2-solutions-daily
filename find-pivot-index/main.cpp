#include <iostream>
#include <vector>

using namespace std;

int pivotIndex(vector<int>& nums) {
    int sum = 0;
    for (int num: nums) {
        sum += num;
    }
    int current_sum = 0;
    for (int i=0; i<nums.size(); i++) {
        if (current_sum == sum-nums[i]-current_sum) {
            return i;
        }
        current_sum += nums[i];
    }
    return -1;
}

int main() {


    return 0;
}
