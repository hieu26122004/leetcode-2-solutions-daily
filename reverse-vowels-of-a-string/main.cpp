#include <iostream>
#include <ctype.h>
#include <vector>
#include <algorithm>

using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

string reverseVowels(string s) {
    string ans = s;
    vector<int> vowelIdx;
    for (int i=0; i<s.length(); i++) {
        if (isVowel(s[i])) {
            vowelIdx.push_back(i);
        }
    }
    int length = vowelIdx.size();
    for (int i=0; i<length/2; i++) {
        swap(ans[vowelIdx[i]], ans[vowelIdx[length - i - 1]]);
    }
    return ans;
}

string reverseVowels(string s) {
    int front = 0;
    int back = s.length()-1;
    while (front < back) {
        while (front < back && !isVowel(s[front])) {
            front ++;
        }
        while (front < back && !isVowel(s[back])) {
            back --;
        }
        if (front <= back) {
            swap(s[front], s[back]);
            front ++;
            back --;
        }
    }
    return s;
}

int main() {


    return 0;
}
