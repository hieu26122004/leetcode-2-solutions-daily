#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    vector<vector<int>> ans;
    sort(intervals.begin(), intervals.end(), [](vector<int> a, vector<int> b) {
        return a[0] < b[0];
    });
    vector<int> current = intervals[0];
    for (int i = 1; i < intervals.size(); i++) {
        if (intervals[i][0] <= current[1]) {
            current[1] = max(current[1], intervals[i][1]);
        } else {
            ans.push_back(current);
            current = intervals[i];
        }
    }
    ans.push_back(current);
    return ans;
}

int main() {


    return 0;
}
