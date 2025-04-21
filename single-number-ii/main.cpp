#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int singleNumber(vector<int>& nums) {
    unordered_map<int, int> mp;
    for (int num: nums) {
        mp[num] ++;
    }
    for (pair<int, int> p: mp) {
        if (p.second == 1) return p.first;
    }
    return 0;
}

int main() {


    return 0;
}
