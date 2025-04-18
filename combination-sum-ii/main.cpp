#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void util(vector<int>& candidates, int target, int idx, vector<int> current, vector<vector<int>>& ans) {
    if (target == 0) {
        ans.push_back(current);
        return;
    }
    if (target < 0) return;
    for (int i=idx; i<candidates.size(); i++) {
        current.push_back(candidates[i]);
        util(candidates, target-candidates[i], i, current, ans);
        current.pop_back();
        while (candidates[idx] == candidates[i+1]) {
            i ++;
        }
    }
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    sort(candidates.begin(), candidates.end());
    vector<vector<int>> ans;
    vector<int> current;
    util(candidates, target, 0, current, ans);
    return ans;
}

int main() {


    return 0;
}
