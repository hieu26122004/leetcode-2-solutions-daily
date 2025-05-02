#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

bool util(string word, string searchWord) {
    if (word.length() < searchWord.length()) return false;
    return word.substr(0, searchWord.length()) == searchWord;
}

int isPrefixOfWord(string sentence, string searchWord) {
    stringstream ss(sentence);
    vector<string> arr;
    string word;
    int ans = 1;
    while (ss >> word) {
        if (util(word, searchWord)) return ans;
        ans ++;
    }
    return -1;
}

int main() {


    return 0;
}
