#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int longestConsecutive(vector<int>& nums) {
    unordered_map<int, int> mp;
    for (int num: nums) {
        if (mp.find(num) != mp.end()) continue;
        int left = mp.find(num-1) != mp.end() ? mp[num-1] : 0;
        int right = mp.find(num+1) != mp.end() ? mp[num+1] : 0;
        int sum = left + right + 1;
        mp[num] = sum;
        mp[num-left] = sum;
        mp[num+right] = sum;
        ans = max(ans, sum);
    }
    return ans;
}

int main() {
    vector<int> test = { 0,3,7,2,5,8,4,6,0,1 };
    cout << longestConsecutive(test) << endl;

    return 0;
}
