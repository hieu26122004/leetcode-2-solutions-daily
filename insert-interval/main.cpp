#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
    vector<vector<int>> ans;
    for (vector<int> current: intervals) {
        if (newInterval[1] < current[0]) {
            ans.push_back(newInterval);
            newInterval = current;
        } else if (current[1] < newInterval[0]) {
            ans.push_back(current);
        } else {
            newInterval[0] = min(newInterval[0], current[0]);
            newInterval[1] = max(newInterval[1], current[1]);
        }
    }
    ans.push_back(newInterval);
    return ans;
}

int main() {


    return 0;
}
