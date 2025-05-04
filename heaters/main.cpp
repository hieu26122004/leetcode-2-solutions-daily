#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findRadius(vector<int>& houses, vector<int>& heaters) {
    int ans = 0;
    sort(houses.begin(), houses.end());
    sort(heaters.begin(), heaters.end());
    int prev = INT_MIN;
    int pHeater = 0;
    int nHeater = heaters.size();
    for (int num: houses) {
        while (pHeater < nHeater && heaters[pHeater] < num ) {
            prev = heaters[pHeater];
            pHeater ++;
        }
        int right = (pHeater == nHeater) ? INT_MAX : heaters[pHeater] - num;
        cout << "right: " << right << endl;
        int left = (prev == INT_MIN) ? INT_MAX : num - prev;
        cout << "left: " << left << endl;
        int distancce = min(left, right);
        ans = max(ans, distancce);
    }
    return ans;
}

int main() {
    vector<int> houses = { 1,5 };
    vector<int> heaters = { 10 };
    cout << findRadius(houses, heaters) << endl;

    return 0;
}
