#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int thirdMax(vector<int>& nums) {
    sort(nums.begin(), nums.end(), [](int a, int b) {
        return a > b;
    });
    int ans = 0;
    int cnt = 0;
    for (int i=1; i<nums.size(); i++) {
        if (cnt == 3) return ans;
        if (i > 0 && nums[i] < nums[i-1]) {
            cnt ++;
            ans = nums[i];
        }
    }
    return ans[0];
}

int main() {


    return 0;
}
