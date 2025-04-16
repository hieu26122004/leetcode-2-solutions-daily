#include <iostream>
#include <vector>
#include <queue>

using namespace std;

long long totalCost(vector<int>& costs, int k, int candidates) {
    priority_queue<int, vector<int>, greater<int>> left, right;
    int lIdx = 0;
    int rIdx = costs.size() - 1;
    long long ans = 0;
    while (k > 0) {
        while (left.size() < candidates && lIdx <= rIdx) {
            left.push(costs[lIdx ++]);
        }
        while (right.size() < candidates && lIdx <= rIdx) {
            right.push(costs[rIdx --]);
        }
        int minRent = 0;
        if (right.empty() || left.top() < right.top()) {
            minRent = left.top();
            left.pop();
        } else if (left.empty() || right.top() < left.top()) {
            minRent = right.top();
            right.pop();
        }
        ans += minRent;
        k --;
    }
    return ans;
}

int main() {


    return 0;
}
