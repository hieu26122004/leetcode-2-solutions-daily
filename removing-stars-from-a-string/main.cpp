#include <iostream>
#include <stack>

using namespace std;

string removeStars(string str) {
    stack<char> stk;
    string ans = "";
    for (char c: str) {
        if (c == '*' && !stk.empty()) {
            stk.pop();
        } else {
            stk.push(c);
        }
    }
    while (!stk.empty()) {
        ans = stk.top() + ans;
        stk.pop();
    }
    return ans;
}

int main() {


    return 0;
}
