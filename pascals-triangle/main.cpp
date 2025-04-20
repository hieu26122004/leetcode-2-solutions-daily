#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ans;
    ans.push_back({ 1 });
    for (int i=1; i<numRows; i++) {
        vector<int> prev = ans[i-1];
        vector<int> current(i + 1);
        current[0] = 1;
        current[i] = 1;
        for (int j=1; j<i; j++) {
            current[j] = prev[j-1] + prev[j];
        }
        ans.push_back(current);
    }
    return ans;
}

int main() {


    return 0;
}
