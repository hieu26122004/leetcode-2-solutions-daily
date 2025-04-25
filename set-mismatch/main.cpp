#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> findErrorNums(vector<int>& nums) {
    vector<int> ans;
    int n = nums.size();
    vector<int> count(n + 1, 0);
    for (int num : nums) {
        if (count[num] == 1) {
            ans.push_back(num);
        }
        count[num]++;
    }
    for (int i = 1; i <= n; i++) {
        if (count[i] == 0) {
            ans.push_back(i);
        }
    }
    return ans;
}

int main() {


    return 0;
}
