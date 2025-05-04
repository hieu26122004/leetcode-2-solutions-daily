#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool check(vector<int>& nums, int current, vector<bool>& gVisited) {
        int n = nums.size();
        int isForward = nums[current] > 0;
        vector<bool> visited(n, false);
        while (true) {
            if (visited[current]) {
                return true;
            }
            if (nums[current] > 0 != isForward) {
                return false;
            }
            visited[current] = true;
            gVisited[current] = true;
            int next = (current + nums[current]) % n;
            if (next < 0) next += n;
            if (next == current) return false;
            current = next;
        }
        return false;
    }
    bool circularArrayLoop(vector<int>& nums) {
        int n = nums.size();
        vector<bool> gVisited(n, false);
        for (int i=0; i<n; i++) {
            if (!gVisited[i] && check(nums, i, gVisited)) return true;
        }
        return false;
    }
};

int main() {
    vector<int> test = { 1, -2 };
    cout << circularArrayLoop(test) << endl;

    return 0;
}
