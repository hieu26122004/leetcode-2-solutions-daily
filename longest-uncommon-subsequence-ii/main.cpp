#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isSubsequence(string a, string b) {
        int i = 0, j = 0;
        while (i < a.size() && j < b.size()) {
            if (a[i] == b[j]) i++;
            j++;
        }
        return i == a.size();
    }
    int findLUSlength(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string, int> mp;
        for (string str : strs) {
            mp[str]++;
        }
        vector<string> strsCpy(strs.begin(), strs.end());
        sort(strsCpy.begin(), strsCpy.end(), [](string& str1, string& str2) {
            return str1.length() > str2.length();
        });
        for (int i = 0; i < n; i++) {
            if (mp[strsCpy[i]] > 1) continue;
            bool satisfy = true;
            for (int j = 0; j < n; j++) {
                if (i == j) continue;
                if (isSubsequence(strsCpy[i], strsCpy[j])) {
                    satisfy = false;
                    break;
                }
            }
            if (satisfy) return strsCpy[i].length();
        }
        return -1;
    }
};

int main() {


    return 0;
}
