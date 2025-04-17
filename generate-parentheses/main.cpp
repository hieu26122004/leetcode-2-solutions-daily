#include <iostream>
#include <vector>

using namespace std;

void util(string current, int open, int close, vector<string>& ans, int n) {
    if (current.length() == 2*n) {
        ans.push_back(current);
        return;
    }
    if (open < n) {
        util(current + '(', open + 1, close, ans, n);
    }
    if (open > close) {
        util(current + ')', open, close + 1, ans, n);
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> ans;
    int open = 0;
    int close = 0;
    string current = "";
    util(current, open, close, ans, n);
    return ans;
}


int main() {


    return 0;
}
