#include <iostream>

using namespace std;

int strStr(string haystack, string needle) {
    int left = 0;
    int right = needle.length();
    string windowStr = haystack.substr(left, right);
    for (right; right<=haystack.length(); right++) {
        if (windowStr == needle) return left;
        windowStr.erase(0, 1);
        windowStr += haystack[right];
        left ++;
    }
    return -1;
}


int main() {


    return 0;
}
