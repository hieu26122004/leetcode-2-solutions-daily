#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

void util(vector<int>& nums, int index, vector<int> current, vector<vector<int>>& ans) {
    ans.push_back(current);
    for (int i=index; i<nums.size(); i++) {
        if (i > index && nums[i] == nums[i-1]) continue;
        current.push_back(nums[i]);
        util(nums, i + 1, current, ans);
        current.pop_back();
    }
}

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    vector<int> current;
    util(nums, 0, current, ans);
    return ans;
}

int main() {


    return 0;
}
