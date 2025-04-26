#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int findShortestSubArray(vector<int>& nums) {
    int ans = 0;
    unordered_map<int, int> count;
    unordered_map<int, pair<int, int>> index;
    for (int i=0; i<nums.size(); i++) {
        count[nums[i]] ++;
        if (index.find(nums[i]) == index.end()) {
            index[nums[i]] = { i, i };
        } else {
            index[nums[i]].second = i;
        }
    }
    int maxCount = 0;
    for (pair<int, int> p: count) {
        maxCount = maxCount(maxCount, p.second);
    }
    for (pair<int, int> p: count) {
        if (p.second == maxCount) {
            ans = min(ans, index[p.first].first - index[p.first].second);
        }
    }
    return ans;
}

int main() {


    return 0;
}
