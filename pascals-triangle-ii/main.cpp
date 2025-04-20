#include <iostream>
#include <vector>

using namespace std;

vector<int> getRow(int rowIndex) {
    vector<int> ans(rowIndex+1, 1);
    vector<int> prev(rowIndex+1, 1);
    for (int i=1; i<rowIndex; i++) {
        for (int j=1; j<i+1; j++) {
            ans[j] = prev[j-1] + prev[j];
        }
        prev = ans;
    }
    return ans;
}

int main() {


    return 0;
}
