#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_set<int> ms;
    for (int i=0; i<nums.size(); i++) {
        if (ms.find(nums[i]) != ms.end()) return true;
        ms.insert(nums[i]);
        if (ms.size() > k) {
            ms.erase(nums[i-k]);
        }
    }
    return false;
}

int main() {

    return 0;
}
