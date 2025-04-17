#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void util(string& digits, int idx, unordered_map<char, vector<char>> mp, string current, vector<string>& ans) {
    if (current.length() == ditgits.length()) {
        ans.push_back();
        return;
    }
    vector<char> allDitgits = mp[digits[idx]];
    for (char c: allDitgits) {
        current += c;
        util(digits, idx+1, mp, current, ans);
        current.pop_back();
    }
}

vector<string> letterCombinations(string digits) {
    unordered_map<char, vector<char>> mp = {
        { '2', { 'a', 'b', 'c' } },
        { '3', { 'd', 'e', 'f' } },
        { '4', { 'g', 'h', 'i' } },
        { '5', { 'j', 'k', 'l' } },
        { '6', { 'm', 'n', 'o' } },
        { '7', { 'p', 'q', 'r', 's' } },
        { '8', { 't', 'u', 'v' } },
        { '9', { 'w', 'x', 'y', 'z' } }
    };
    vector<string> ans;
    string current = "";
    util(digits, 0, mp, current, ans);
    return ans;
}

int main() {


    return 0;
}
