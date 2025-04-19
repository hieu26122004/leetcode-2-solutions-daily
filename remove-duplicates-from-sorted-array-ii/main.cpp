#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    int current = -1;
    int count = 0;
    for (int num: nums) {
        if (current != -1 && num != nums[current]) {
            count = 0;
        }
        if (count < 2) {
            nums[++current] = num;
            count ++;
        }
    }
    return current + 1;
}

int main() {


    return 0;
}
