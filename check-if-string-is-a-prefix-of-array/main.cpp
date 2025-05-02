#include <iostream>

using namespace std;

class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        int i = 0;
        for (string word: words) {
            for (char c: word) {
                if (i >= s.length() || s[i] != c) return false;
                i ++;
            }
            if (i == s.length()) return true;
        }
        return i == s.length();
    }
};

int main() {


    return 0;
}
