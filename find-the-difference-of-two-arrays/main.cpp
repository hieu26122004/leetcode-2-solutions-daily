#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> s1(nums1.begin(), nums1.end());
    unordered_set<int> s2(nums2.begin(), nums2.end());
    vector<int> distinct1;
    vector<int> distinct2;
    vector<vector<int>> ans;
    for (int num: s1) {
        if (s2.find(num) == s2.end()) {
            distinct1.push_back(num);
        }
    }
    for (int num: s2) {
        if (s1.find(num) == s1.end()) {
            distinct2.push_back(num);
        }
    }
    return { distinct1, distinct2 };
}

int main() {

    return 0;
}
