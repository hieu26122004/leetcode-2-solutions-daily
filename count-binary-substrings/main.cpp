#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int countBinarySubstrings(string str) {
        int ans = 0;
        int n = str.length();
        vector<int> arr;
        int start = 0;
        for (int i=1; i<n; i++) {
            if (str[start] != str[i]) {
                arr.push_back(i-start);
                start = i;
            }
        }
        arr.push_back(n - start);
        for (int i=1; i<arr.size(); i++) {
            ans += min(arr[i], arr[i-1]);
        }
        return ans;
    }
};

int main() {
    cout << check("11000", 0, 4) << endl;

    return 0;
}
