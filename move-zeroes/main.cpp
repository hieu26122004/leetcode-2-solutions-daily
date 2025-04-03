#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
    int i = 0;
    for (int j=0; j<nums.size(); j++) {
        if (nums[j] != 0) {
            swap(nums[i++], nums[j]);
        }
    }
}

int main() {


    return 0;
}
