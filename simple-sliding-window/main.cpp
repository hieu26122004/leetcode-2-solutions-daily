#include <iostream>
#include <vector>

using namespace std;

int maxSumSlidingWindow(vector<int>& arr, int k) {
    int windowSum = 0;
    for (int i=0; i<k; i++) {
        windowSum += arr[i];
    }
    int maxSum = windowSum;
    for (int i=k; i<arr.size(); i++) {
        windowSum -= arr[i-k];
        windowSum += arr[i];
        maxSum = max(maxSum, windowSum);
    }
    return maxSum;
}

int minSubarrayLength(int S, vector<int>& arr) {
    int left = 0;
    int minLength = INT_MAX;
    int windowSum = 0;
    for (int right = 0; right<arr.size(); right++) {
        windowSum += arr[right];
        while (windowSum >= S) {
            minLength = min(minLength, right-left+1);
            windowSum -= arr[left++];
        }
    }
    return minLength;
}

int main() {
    vector<int> arr = {2, 1, 5, 1, 3, 2};
    int k = 3;

    cout << maxSumSlidingWindow(arr, k);

    return 0;
}
