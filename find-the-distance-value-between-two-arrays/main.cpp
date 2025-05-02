#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ans = 0;
        for (int num: arr1) {
            int i = 0;
            while (i < arr2.size() && abs(num - arr2[i]) > d) {
                i++;
            }
            if (i == arr2.size()) ans ++;
        }
        return ans;
    }
};

int main() {


    return 0;
}
