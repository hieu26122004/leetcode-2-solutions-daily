#include <iostream>

using namespace std;

class Solution {
public:
    void util(const string& str, int left, int right, int& ans) {
        int n = str.length();
        while (left >= 0 && right < n) {
            if (str[left] != str[right]) return;
            ans += 1;
            left--;
            right++;
        }
    }
    int countSubstrings(const string& str) {
        int n = str.length();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            util(str, i, i, ans);
            util(str, i, i + 1, ans);
        }
        return ans;
    }
};

int main() {


    return 0;
}
