#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
    vector<pair<int, int>> nums2Cpy(nums2.size());
    for (int i=0; i<nums2.size(); i++) {
        nums2Cpy[i] = { nums2[i], i };
    }
    sort(nums2Cpy.begin(), nums2Cpy.end(), [](pair<int, int> a, pair<int, int> b) {
        return a.first > b.first;
    });
    long long ans = 0;
    long long sum = 0;
    priority_queue<int> pq;
    for (int i=0; i<nums2Cpy.size(); i++) {
        int value = nums2Cpy[i].first;
        int index = nums2Cpy[i].second;
        sum += nums1[index];
        pq.push(nums1[index]);
        if (pq.size() > k) {
            sum -= pq.top();
            pq.pop();
        }
        if (pq.size() == k) {
            ans = max(ans, sum * value]);
        }
    }
    return ans;
}

int main() {


    return 0;
}
