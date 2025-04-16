#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int util(vector<int> piles, int k) {
    int hours = 0;
    for (int num: piles) {
        hours += ceil((double)num / k);
    }
    return hours;
}

int minEatingSpeed(vector<int>& piles, int h) {
    int left = 1;
    int right = 0;
    for (int num: piles) {
        right = max(right, num);
    }
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int hours = util(piles, mid);
        if (hours > h) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return left;
}

int main() {


    return 0;
}
