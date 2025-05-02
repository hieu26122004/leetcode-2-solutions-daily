#include <iostream>
#include <vector>

using namespace std;

    void duplicateZeros(vector<int>& nums) {
        int zeroCount = 0;
        int n = nums.size();
        int last = n - 1;
        for (int i=0; i<n - zeroCount; i++) {
            if (nums[i] == 0) {
                zeroCount ++;
            }
            if (nums[i] == 0 && i == n - zeroCount) {
                zeroCount --;
                nums[last] = 0;
                last --;
            }
        }
        int j = last - zeroCount;
        for (j; j>=0; j--) {
            int val = nums[j];
            nums[last --] = val;
            if (val == 0) {
                nums[last --] = 0;
            }
        }
    }

int main() {
    vector<int> test = { 1,0,2,3,0,4,5,0 };
    duplicateZeros(test);
    for (int num: test) {
        cout << num << endl;
    }

    return 0;
}
