#include <iostream>

using namespace std;

void reverse(string& str, int left, int right) {
    while (left < right) {
        swap(str[left++], str[right--]);
    }
}

string reverseStr(string s, int k) {
    int n = s.length();
    for (int i=0; i<n; i += 2*k) {
        int right = min(i + k - 1, n - 1);
        reverse(s, i, right);
    }
    return s;
}

int main() {


    return 0;
}
