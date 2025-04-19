#include <iostream>
#include <vector>

using namespace std;

void util(vector<int>& nums, vector<int> current, int index, vector<vector<int>>& ans) {
    ans.push_back(current);
    for (int i=index; i<nums.size(); i++) {
        current.push_back(nums[i]);
        util(nums, current, i + 1, ans);
        current.pop_back();
    }
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> current;
    util(nums, current, 0, ans);
    return ans;
}

int main() {


    return 0;
}
