#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int ans = 0;
        for (int a=0; a<n-2; a++) {
            if (nums[a] == 0) continue;
            for (int b=a+1; b<n-1; b++) {
                if (nums[b] == 0) continue;
                int c = b+1;
                int sum = nums[a] + nums[b];
                while (c < n && nums[c] < sum && nums[c] > 0) {
                    c ++;
                }
                ans += c - (b + 1);
            }
        }
        return ans;
    }
};

int main() {


    return 0;
}
