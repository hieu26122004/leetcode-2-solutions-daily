#include <iostream>
#include <vector>

using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool> ans;
    int mostCandy = 0;
    for (int candy: candies) {
        mostCandy = max(mostCandy, candy);
    }
    for (int candy: candies) {
        ans.push_back(candy + extraCandies >= mostCandy);
    }
    return ans;
}

int main() {


    return 0;
}
