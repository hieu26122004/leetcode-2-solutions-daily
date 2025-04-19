#include <iostream>
#include <vector>

using namespace std;

void sortColors(vector<int>& nums) {
    int start = 0;
    int end = nums.size() - 1;
    int i = 0;
    while (i <= end) {
        if (nums[i] == 0) {
            swap(nums[i], nums[start]);
            start ++;
            i ++;
        } else if (nums[i] == 2) {
            swap(nums[i], nums[end]);
            end --;
        } else {
            i ++;
        }
    }
}

int main() {

    return 0;
}
