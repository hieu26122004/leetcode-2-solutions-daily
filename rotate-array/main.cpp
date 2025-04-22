#include <iostream>
#include <vector>

using namespace std;

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;
    vector<int> tmp;
    for (int i=0; i<n; i++) {
        tmp[(i+k)%n] = nums[i];
    }
    nums = tmp;
}

int main() {


    return 0;
}
