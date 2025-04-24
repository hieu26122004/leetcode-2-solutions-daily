#include <iostream>
#include <vector>

using namespace std;

int findPoisonedDuration(vector<int>& timeSeries, int duration) {
    int ans = 0;
    for (int i=0; i<timeSeries.size()-1; i++) {
        int diff = timeSeries[i+1] - timeSeries[i];
        ans += min(diff, duration);
    }
    ans += duration;
    return ans;
}

int main() {


    return 0;
}
