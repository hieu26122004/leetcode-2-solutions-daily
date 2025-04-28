#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int n = numbers.size();
        int left = 0;
        int right = n - 1;
        while (left < right) {
            int sum = numbers[left] + numbers[right];
            if (sum == target) {
                ans.push_back(left+1);
                ans.push_back(right+1);
                break;
            }
            if (sum > target) right --;
            if (sum < target) left ++;
        }
        return ans;
    }
};

int main() {


    return 0;
}
