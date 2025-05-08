#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findClosest(const vector<int>& arr, int x) {
        int left = 0, right = arr.size() - 1;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] < x) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        if (left > 0 && abs(arr[left-1] - x) <= abs(arr[left] - x)) {
            return left - 1;
        }
        return left;
    }
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        if (k == 0) return {};
        int closestIdx = findClosest(arr, x);
        int left = closestIdx;
        int right = closestIdx;
        while (right - left + 1 < k) {
            if (left == 0) {
                right++;
            } else if (right == arr.size() - 1) {
                left--;
            } else {
                if (abs(arr[left-1] - x) <= abs(arr[right+1] - x)) {
                    left--;
                } else {
                    right++;
                }
            }
        }
        return vector<int>(arr.begin() + left, arr.begin() + right + 1);
    }
};

int main() {
    vector<int> test = { 1,1,2,3,4,5 };
    vector<int> ans = findClosestElements(test, 4, -1);

    return 0;
}
