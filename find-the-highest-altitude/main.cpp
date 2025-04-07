#include <iostream>
#include <vector>

using namespace std;

int largestAltitude(vector<int>& gain) {
    int altitude = 0;
    int ans = 0;
    for (int num: gain) {
        altitude += num;
        ans = max(ans, altitude);
    }
    return ans;
}

int main() {


    return 0;
}
