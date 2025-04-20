#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices) {
    int ans = 0;
    int buy = prices[0];
    for (int num: prices) {
        buy = min(buy, num);
        ans = max(ans, num - buy);
    }
    return ans;
}

int main() {


    return 0;
}
