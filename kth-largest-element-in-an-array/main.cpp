#include <iostream>
#include <vector>
#include <queue>

using namespace std;;

int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int num: nums) {
        pq.push(num);
        if (pq.size() > k) {
            pq.pop();
        }
    }
    return pq.top();
}

int main() {


    return 0;
}
