#include <iostream>
#include <vector>

using namespace std;

double findMaxAverage(vector<int>& nums, int k) {
    double max_avg = 0;
    int sum = 0;
    for (int i=0; i<k; i++) {
        sum += nums[i];
    }
    max_avg = (double)sum / k;
    for (int i=k; i<nums.size(); i++) {
        sum = sum - nums[i-k] + nums[i];
        max_avg = max(max_avg, ((double)sum/k));
    }
    return max_avg;
}

int main() {


    return 0;
}
