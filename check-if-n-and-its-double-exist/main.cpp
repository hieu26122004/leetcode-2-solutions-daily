#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int i = 0;
        int j = 0;
        while (j < n && i < n) {
            int val = 2 * arr[j];
            if (arr[i] == val && i != j) {
                return true;
            } else if (arr[i] < val) {
                i ++;
            } else {
                j ++;
            }
        }
        return false;
    }
};

int main() {
    vector<int> test = { -2,0,10,-19,4,6,-8 };
    checkIfExist(test);

    return 0;
}
