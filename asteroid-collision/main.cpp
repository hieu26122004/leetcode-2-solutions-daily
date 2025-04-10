#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> asteroidCollision(vector<int>& asteroids) {
    stack<int> stk;
    for (int num: asteroids) {
        bool explose = false;
        while (!stk.empty() && num < 0 && stk.top() > 0) {
            if (-num > stk.top()) {
                stk.pop();
            } else if (-num == stk.top()) {
                explose = true;
                stk.pop();
                break;
            } else {
                explose = true;
                break;
            }
        }
        if (!explose) {
            stk.push(num);
        }
    }
    vector<int> ans(stk.size());
    for (int i = stk.size() - 1; i >= 0; i--) {
        ans[i] = stk.top();
        stk.pop();
    }
    return ans;
}

int main() {


    return 0;
}
