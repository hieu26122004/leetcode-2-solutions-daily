#include <iostream>
#include <vector>

using namespace std;

bool increasingTriplet(vector<int>& nums) {
    int n = nums.size();
    vector<bool> lessthan(n, false);
    int largest = nums[n-1];
    int smallest = nums[0];
    for (int i=0; i<n; i++) {
        lessthan[i] = smallest < nums[i];
        smallest = min(smallest, nums[i]);
    }
    for (int i=n-1; i>=0; i--) {
        if (lessthan[i] && (nums[i] < largest)) return true;
        largest = max(largest, nums[i]);
    }
    return false;
}

int main() {


    return 0;
}
