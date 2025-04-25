#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int findLHS(vector<int>& nums) {
    int ans = 0;
    unordered_map<int, int> mp;
    for (int num: nums) {
        mp[num] ++;
    }
    for (pair<int, int> p: mp) {
        if (mp.find(p.first + 1) != mp.end()) {
            ans = max(ans, p.second + mp[p.first + 1]);
        }
    }
    return ans;
}

int main() {


    return 0;
}
