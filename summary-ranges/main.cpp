#include <iostream>
#include <vector>

using namespace std;

vector<string> summaryRanges(vector<int>& nums) {
    vector<string> ans;
    int n = nums.size();
    if (n == 0) return ans;
    int start = 0;
    for (int end=1; end<n; end++) {
        if (nums[end] - nums[end-1] != 1) {
            if (end - 1 == start) {
                ans.push_back(to_string(nums[start]));
            } else {
                ans.push_back(to_string(nums[start]) + "->" + to_string(nums[end-1]));
            }
            start = end;
        }
    }
    if (nums[start] == nums[n-1]) {
        ans.push_back(to_string(nums[start]));
    } else {
        ans.push_back(to_string(nums[start]) + "->" + to_string(nums[n-1]));
    }
    return ans;
}

int main() {


    return 0;
}
