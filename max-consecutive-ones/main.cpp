#include <iostream>
#include <vector>

using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int ans = 0;
    int cnt = 0;
    for (int num: nums) {
        if (num == 1) {
            cnt ++;
            ans = max(ans, cnt);
        } else {
            cnt = 0;
        }
    }
    return ans;
}

int main() {


    return 0;
}
