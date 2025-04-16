#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
    vector<int> ans;
    sort(potions.begin(), potions.end());
    for (int spell: spells) {
        int left = 0;
        int right = potions.size() - 1;
        int start = -1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            long long res = (long long) spell * potions[mid];
            if (res >= success) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        ans.push_back(potions.size() - left);
    }
    return ans;
}
};

int main() {


    return 0;
}
