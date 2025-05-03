#include <iostream>

using namespace std;

class Solution {
public:
    int stoi(string num) {
        int ans = 0;
        for (char c : num) {
            ans = ans * 10 + (c - '0');
        }
        return ans;
    }

    int compareVersion(string version1, string version2) {
        vector<string> arr1, arr2;
        string word;

        stringstream ss1(version1);
        while (getline(ss1, word, '.')) {
            arr1.push_back(word);
        }

        stringstream ss2(version2);
        while (getline(ss2, word, '.')) {
            arr2.push_back(word);
        }

        int n1 = arr1.size();
        int n2 = arr2.size();
        int n = max(n1, n2);

        for (int i = 0; i < n; i++) {
            int val1 = i < n1 ? stoi(arr1[i]) : 0;
            int val2 = i < n2 ? stoi(arr2[i]) : 0;
            if (val1 < val2) return -1;
            if (val1 > val2) return 1;
        }

        return 0;
    }
};

int main() {

    return 0;
}
