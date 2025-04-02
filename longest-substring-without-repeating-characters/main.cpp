#include <iostream>
#include <unordered_map>

using namespace std;

int lengthOfLongestSubstring(string str) {
    int max_length = 0;
    unordered_map<char, int> mp;
    int start = 0;
    int length = str.length();

    for (int i=0; i<length; i++) {
        if (mp.find(str[i]) != mp.end()) {
            start = max(start, mp[str[i]] + 1);
        }
        max_length = max(max_length, i - start + 1);
        mp[str[i]] = i;
    }

    return max_length;
}

int main() {
    cout << lengthOfLongestSubstring("abcabcbb") << endl;

    return 0;
}
