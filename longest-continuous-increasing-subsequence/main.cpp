#include <iostream>
#include <vector>

using namespace std;

int findLengthOfLCIS(vector<int>& nums) {
    int ans = 0;
    int current = 0;
    for (int i=1; i<nums.size(); i++) {
        if (nums[i] > nums[i-1]) {
            current ++;
        } else {
            ans = max(ans, current);
            current = 0;
        }
    }
    ans = max(ans, current);
    return ans + 1;
}

int main() {


    return 0;
}
