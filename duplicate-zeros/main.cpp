#include <iostream>
#include <vector>

using namespace std;

    void duplicateZeros(vector<int>& nums) {
        int zeroCount = 0;
        int n = nums.size();
        bool idk = false;
        for (int i=0; i<n - zeroCount; i++) {
            if (nums[i] == 0) {
                if (i == n - zeroCount) {
                    idk = true;
                }
                zeroCount ++;
            }
        }
        int i = n - 1;
        int j = n - zeroCount - 1;
        for (j; j>=0; j--) {
            int val = nums[j];
            nums[i --] = val;
            if (val == 0) {
                nums[i --] = 0;
            }
        }
    }

int main() {
    vector<int> test = { 8,4,5,0,0,0,0,7 };
    duplicateZeros(test);
    for (int num: test) {
        cout << num << endl;
    }

    return 0;
}
