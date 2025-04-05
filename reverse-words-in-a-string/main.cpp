#include <iostream>
#include <vector>

using namespace std;

string reverseWords(string s) {
    vector<string> words;
    string word = "";
    string ans = "";
    for (char c: s) {
        if (c != ' ') {
            word += c;
        }
        if (!word.empty() && c == ' ') {
            words.push_back(word);
            word = "";
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }
    for (int i=words.size()-1; i>=0; i--) {
        ans += words[i];
        if (i != 0) {
            ans += " ";
        }
    }
    return ans;
}

int main() {


    return 0;
}
