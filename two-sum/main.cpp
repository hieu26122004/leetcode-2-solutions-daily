#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans;
    unordered_map<int, int> mp;

    for (int i=0; i<nums.size(); i++) {
        int diff = target - nums[i];
        if (mp.find(diff) != mp.end()) {
            ans.push_back(mp[diff]);
            ans.push_back(i);
            return ans;
        }
        if (mp.find(nums[i]) == mp.end()) {
            mp[nums[i]] = i;
        }
    }
}

int main() {
    vector<int> test = { 2, 2, 3, 6, 4 };

    for (int i: twoSum(test, 8)) {
        cout << i << endl;
    }

    return 0;
}
