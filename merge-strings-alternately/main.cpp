#include <iostream>

using namespace std;

string mergeAlternately(string word1, string word2) {
    int idx1 = 0;
    int idx2 = 0;

    string ans = "";
    while (idx1 < word1.length() || idx2 < word2.length()) {
        if (idx1 < word1.length()) {
            ans += word1[idx1++];
        }
        if (idx2 < word2.length()) {
            ans += word2[idx2++];
        }
    }
    return ans;
}

int main() {
    cout << mergeAlternately("abcd", "pq") << endl;

    return 0;
}
