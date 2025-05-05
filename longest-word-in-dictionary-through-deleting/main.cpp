#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string a) {
        int i = 0, j = 0;
        while (i < a.size() && j < s.size()) {
            if (a[i] == s[j]) i++;
            j++;
        }
        return i == a.size();
    }
    string findLongestWord(string str, vector<string>& dictionary) {
        sort(dictionary.begin(), dictionary.end(), [](string& str1, string& str2) {
            if (str1.length() == str2.length()) {
                return str1 < str2;
            }
            return str1.length() > str2.length();
        });
        for (string word: dictionary) {
            if (isSubsequence(str, word)) return word;
        }
        return "";
    }
};

int main() {


    return 0;
}
