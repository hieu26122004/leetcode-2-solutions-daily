#include <iostream>
#include <unordered_set>
#include <algorithm>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> ms;

    for (int num: nums) {
        if (ms.find(num) != ms.end()) return true;
        ms.insert(num);
    }
    return false;
}

bool containsDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    for (int i=0; i<nums.size()-1; i++) {
        if (nums[i] == nums[i+1]) return true;
    }
    return false;
}

int main() {


    return 0;
}
