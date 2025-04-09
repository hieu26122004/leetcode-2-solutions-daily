#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int equalPairs(vector<vector<int>>& grid) {
    unordered_map<vector<int>, int> mp;
    int ans = 0;
    for (vector<int> row: grid) {
        mp[row] ++;
    }
    for (int i=0; i<grid.size(); i++) {
        vector<int> col;
        for (int j=0; j<grid.size(); j++) {
            col.push_back(grid[j][i]);
        }
        if (mp.find(col) != mp.end()) {
            ans += mp[col];
        }
    }
    return ans;
}

int main() {


    return 0;
}
