#include <iostream>
#include <vector>

using namespace std;

void util(vector<int>& cost, int currentLevel, int totalCost, int& ans) {
    if (currentLevel == cost.size() - 1 || currentLevel == cost.size() - 2) {
        ans = min(ans, totalCost);
        return;
    }
    util(cost, currentLevel + 1, totalCost + cost[currentLevel+1], ans);
    util(cost, currentLevel + 2, totalCost + cost[currentLevel + 2], ans);
}

int minCostClimbingStairs(vector<int>& cost) {
    int ans = INT_MAX;
    util(cost, -1, 0, ans);
    return ans;
}


int main() {


    return 0;
}
