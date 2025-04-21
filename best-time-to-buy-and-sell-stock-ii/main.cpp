#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices) {
    int ans = 0;
    int buy = INT_MAX;
    for (int num: prices) {
        buy = min(buy, num);
        if (num > buy) {
            ans += num - buy;
            buy = num;
        }
    }
    return ans;
}

int main() {


    return 0;
}
