#include <iostream>
#include <vector>

using namespace std;

vector<int> numberOfLines(vector<int>& widths, string str) {
    vector<int> ans(2, 1);
    int currentLength = 0;
    for (char c : str) {
        int charWidth = widths[c - 'a'];
        if (currentLength + charWidth > 100) {
            ans[0] ++;
            currentLength = 0;
        }
        currentLength += charWidth;
    }
    ans[1] = currentLength == 0 ? 100 : currentLength;
    return ans;
}

int main() {


    return 0;
}
