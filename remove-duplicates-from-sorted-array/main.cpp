#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    int i = 0;
    for (int j=1; j<nums.size(); j++) {
        if (nums[i] != nums[j]) {
            swap(nums[++i], nums[j]);
        }
    }
    return i+1;
}

int main() {

    return 0;
}
