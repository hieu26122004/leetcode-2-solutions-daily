#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    pair<int, int> util(string& str, int left, int right) {
        int n = str.length();
        while (left >= 0 && right < n && str[left] == str[right]) {
            left --;
            right ++;
        }
        return { left + 1, right - left - 1 };
    }
    string longestPalindrome(string str) {
        pair<int, int> ans = { 0, 0 };
        int n = str.length();
        for (int i=0; i<n; i++) {
            pair<int, int> p1 = util(str, i, i);
            pair<int, int> p2 = util(str, i, i+1);
            if (p1.second > ans.second) {
                ans = p1;
            }
            if (p2.second > ans.second) {
                ans = p2;
            }
        }
        return str.substr(ans.first, ans.second);
    }
};

int main() {

    return 0;
}
