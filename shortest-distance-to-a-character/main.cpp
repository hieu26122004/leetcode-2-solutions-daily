#include <iostream>
#include <vector>

using namespace std;

/*
class Solution {
public:
    vector<int> shortestToChar(string s, char target) {
        vector<int> result;
        vector<int> targetIndices;
        int n = s.length();

        for (int i = 0; i < n; ++i) {
            if (s[i] == target) {
                targetIndices.push_back(i);
            }
        }

        int nearestRight = 0;
        int m = targetIndices.size();
        int nearestLeft = INT_MAX;

        for (int i = 0; i < n; ++i) {
            int distLeft = (nearestLeft == INT_MAX) ? INT_MAX : abs(i - nearestLeft);
            int distRight = (nearestRight >= m) ? INT_MAX : abs(i - targetIndices[nearestRight]);

            result.push_back(min(distLeft, distRight));
            if (nearestRight < m && i == targetIndices[nearestRight]) {
                nearestLeft = targetIndices[nearestRight];
                ++nearestRight;
            }
        }

        return result;
    }
};
*/

/*
vector<int> shortestToChar(string str, char target) {
    vector<int> ans;
    int n = str.length();
    int i = 0;
    int prev = INT_MAX;
    for (int j=0; j<n; j++) {
        if (str[j] == target) {
            while (i != j) {
                int diff_1 = abs(prev - j);
                int diff_2 = abs(i - j);
                ans.push_back(min(diff_1, diff_2));
                i ++;
            }
            prev = i;
            i ++;
        }
    }
    return ans;
}
*/

/*
class Solution {
public:
vector<int> shortestToChar(string str, char target) {
    int n = str.length();
    vector<int> ans(n, INT_MAX);
    int prev = -1;
    for (int i=0; i<n; i++) {
        if (str[i] == target) {
            prev = i;
            ans[i] = 0;
        } else if (prev != -1) {
            ans[i] = i - prev;
        }
    }
    prev = -1;
    for (int i = n - 1; i >= 0; --i) {
        if (str[i] == target) {
            prev = i;
            ans[i] = 0;
        } else if (prev != -1) {
            ans[i] = min(ans[i], prev - i);
        }
    }
    return ans;
}
};
*/

int main() {


    return 0;
}
