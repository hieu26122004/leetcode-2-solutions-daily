#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> plusOne(vector<int>& digits) {
    vector<int> ans;
    int carry = 0;
    int n = digits.size();
    for (int i=n-1; i>= 0; i--) {
        int newValue = digits[i] + carry;
        if (i == n-1) {
            newValue += 1;
        }
        ans.push_back(newValue % 10);
        carry = newValue / 10;
    }
    if (carry != 0) {
        ans.push_back(carry);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {


    return 0;
}
