#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {
        int ans = 0;
        int n = citations.size();
        sort(citations.begin(), citations.end());
        for (int i=0; i<n; i++) {
            if (citations[i] >= n-i) {
                ans = max(ans, n-i);
            }
        }
        return ans;
    }
};

int main() {


    return 0;
}
