#include <iostream>
#include <vector>

using namespace std;

/*

bool isPalindromeString(string str, int start, int end) {
    while (start < end) {
        if (str[start] != str[end]) {
            return false;
        }
        start ++;
        end --;
    }
    return true;
}

string longestPalindrome(string str) {
    int length = str.length();

    for (int i=length; i>0; i--) {
        for (int j=0; j<=length-i; j++) {
            if (isPalindromeString(str, j, j+i-1)) return str.substr(j, i);
        }
    }

    return "";
}

*/

// Solution is referenced from LeetCode

string expand(string str, int i, int j) {
    int left = i;
    int right = j;
    while (i >= 0 && j < str.length() && str[left] == str[right]) {
        left --;
        right ++;
    }
    return str.substr(left+1, right-left-1);
}

string longestPalindrome(string str) {
    string ans = "";
    for (int i=0; i<str.length(); i++) {
        string odd = expand(str, i, i);
        if (odd.length() > ans.length()) {
            ans = odd;
        }
        string even = expand(str, i, i+1);
        if (even.length() > ans.length()) {
            ans = even;
        }
    }
    return ans;
}

int main() {
    cout << longestPalindrome("babad");

    return 0;
}
