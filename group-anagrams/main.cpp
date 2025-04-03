#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>> ans;
    unordered_map<string, vector<string>> mm;

    for (int i=0; i<strs.size(); i++) {
        string strcpy = strs[i];
        sort(strcpy.begin(), strcpy.end());
        mm[strcpy].push_back(strs[i]);
    }
    for (auto pair: mm) {
        ans.push_back(pair.second);
    }
    return ans;
}

int main() {


    return 0;
}
