#include <iostream>
#include <vector>

using namespace std;

bool canJump(vector<int>& nums) {
    int maxLength = 0;
    int maxEnd = 0;
    for (int i=0; i<nums.size(); i++) {
        maxLength = max(maxLength, i + nums[i]);
        if (i == maxEnd) {
            maxEnd = maxLength;
        }
        if (maxEnd < i) return false;
    }
    return true;
}

int main() {


    return 0;
}
