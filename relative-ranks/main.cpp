#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

string getRank(int rank) {
    if (rank == 1) return "Gold Medal";
    if (rank == 2) return "Silver Medal";
    if (rank == 3) return "Bronze Medal";
    return to_string(rank);
}

vector<string> findRelativeRanks(vector<int>& score) {
    vector<string> ans;
    vector<int> temp = score;
    unordered_map<int, string> mp;
    sort(temp.begin(), temp.end(), greater<int>());
    for (int i=0; i<temp.size(); i++) {
        mp[temp[i]] = getRank(i+1);
    }
    for (int num: score) {
        ans.push_back(mp[num]);
    }
    return ans;
}

int main() {


    return 0;
}
