#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int left = 0;
        int right = n-1;
        int idx = n - 1;
        while (left <= right) {
            int numL = nums[left] * nums[left];
            int numR = nums[right] * nums[right];
            if (numL > numR) {
                ans[idx --] = numL;
                left ++;
            } else {
                ans[idx --] = numR;
                right --;
            }
        }
        return ans;
    }
};

int main() {


    return 0;
}
