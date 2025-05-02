#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(string str) {
        int start = 0;
        int end = str.length() - 1;
        while (start < end) {
            if (str[start] != str[end]) return false;
            start ++;
            end --;
        }
        return true;
    }
    int removePalindromeSub(string str) {
        return isPalindrome(str) ? 1 : 2;
    }
};

int main() {


    return 0;
}
