#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

bool isAnagram(string s, string t) {
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s == t;
}

bool isAnagram(string s, string t) {
    unordered_map<char, int> mm;
    for (char c: s) {
        mm[c] ++;
    }
    for (char c: t) {
        mm[c] --;
    }
    for (auto pair: mm) {
        if (pair.second != 0) return false;
    }
    return true;
}

int main() {


    return 0;
}
