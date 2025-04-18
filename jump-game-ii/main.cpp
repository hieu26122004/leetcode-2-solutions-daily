#include <iostream>
#include <vector>

using namespace std;

int jump(vector<int>& nums) {
    int ans = 0;
    int maxLength = 0;
    int maxEnd = 0;
    for (int i=0; i<nums.size(); i++) {
        maxLength = max(maxCurrent, nums[i] + i);
        if (i == maxEnd) {
            ans ++;
            maxEnd = maxLength;
        }
        if (maxEnd > nums.size() - 1) break;
    }
    return ans;
}

int main() {


    return 0;
}
