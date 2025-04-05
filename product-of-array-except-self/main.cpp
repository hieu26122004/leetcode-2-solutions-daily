#include <iostream>
#include <vector>

using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int length = nums.size();
    vector<int> ans(length, 1);
    for (int i=1; i<length; i++) {
        ans[i] = ans[i-1] * nums[i-1];
    }
    int accumulate = 1;
    for (int i=length-2; i>=0; i--) {
        accumulate *= nums[i+1];
        ans[i] *= accumulate;

    }
    return ans;
}

int main() {
    vector<int> test = { 2, 4, 5, 6 };
    vector<int> ans = productExceptSelf(test);



    return 0;
}
