#include <iostream>
#include <vector>

using namespace std;

int maxProduct(vector<int>& nums) {
    int ans = INT_MIN;
    int n = nums.size();
    int current = 1;
    for (int num: nums) {
        current *= num;
        ans = max(current, ans);
        if (num == 0) {
            current = 1;
        }
    }
    current = 1;
    for (int i=n-1; i>=0; i--) {
         current *= nums[i];
        ans = max(current, ans);
        if (nums[i] == 0) {
            current = 1;
        }
    }
    return ans;
}

int main() {


    return 0;
}
