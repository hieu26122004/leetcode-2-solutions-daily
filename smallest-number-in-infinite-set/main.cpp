#include <iostream>
#include <queue>
#include <unordered_set>

using namespace std;

class SmallestInfiniteSet {
private:
    int current;
    priority_queue<int, vector<int>, greater<int>> pq;
    unordered_set<int> ms;
public:
    SmallestInfiniteSet() {
        current = 1;
    }
    int popSmallest() {
        int smallest = pq.empty() ? current : pq.top();
        ms.insert(smallest);
        if (pq.empty()) {
            current ++;
        } else {
            pq.pop();
        }
        return smallest;
    }
    void addBack(int num) {
        if (ms.find(num) != ms.end()) {
            pq.push(num);
            ms.erase(num);
        }
    }
};

int main() {


    return 0;
}
