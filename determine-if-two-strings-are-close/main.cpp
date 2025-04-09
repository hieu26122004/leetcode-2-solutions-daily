#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool closeStrings(string word1, string word2) {
    if (word1.length() != word2.length()) return false;
    vector<int> arr1(26);
    vector<int> arr2(26);
    for (char c: word1) {
        arr1[c - 'a'] ++;
    }
    for (char c: word2) {
        arr2[c - 'a'] ++;
    }
    for (int i=0; i<26; i++) {
        if ((arr1[i] == 0 && arr2[i] != 0) || (arr2[i] == 0 && arr1[i] != 0)) return false;
    }
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    return arr1 == arr2;
}

int main() {
    cout << 'b' - 'a';

    return 0;
}
