#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
void util(vector<int>& candidates, int target, int idx, vector<int>& current, vector<vector<int>>& ans) {
    if (target == 0) {
        ans.push_back(current);
        return;
    }
    if (target < 0) return;
    for (int i=idx; i<candidates.size(); i++) {
        current.push_back(candidates[i]);
        util(candidates, target-candidates[i], i, current, ans);
        current.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
    vector<int> current;
    util(candidates, target, 0, current, ans);
    return ans;
}
};

int main() {


    return 0;
}
