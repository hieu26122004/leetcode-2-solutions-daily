#include <iostream>

using namespace std;

class Solution {
public:
    bool check(string str, int left, int right) {
        while (left < right) {
            if (str[left++] == str[right--]) return false;
        }
        return true;
    }
    bool validPalindrome(string str) {
        bool removed = false;
        int i = 0;
        int j = str.length() - 1;
        while (i < j) {
            if (str[i] != str[j]) {
                bool removeLeft = check(str, i+1, j);
                bool removeRight = check(str, i, j-1);
                return removeLeft || removeRight;
            }
            i ++;
            j --;
        }
        return true;
    }
};

int main() {
    cout << true && true;

    return 0;
}
