#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void util(int k, int n, int start, vector<int> current, int sum, vector<vector<int>>& ans) {
        if (current.size() > k) return;
        if (current.size() == k && sum == n) {
            ans.push_back(current);
            return;
        }
        for (int i=start; i<=9; i++) {
            current.push_back(i);
            util(k, n, i+1, current, sum+i, ans);
            current.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> current;
        util(k, n, 1, current, 0, ans);
        return ans;
    }
};

int main() {


    return 0;
}
