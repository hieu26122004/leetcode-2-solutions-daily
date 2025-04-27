#include <iostream>
#include <vector>
#include <unordered_map>
#include <ctype.h>

using namespace std;

string shortestCompletingWord(string licensePlate, vector<string>& words) {
    unordered_map<char, int> mp;
    for (char c: licensePlate) {
        if (isalpha(c)) {
            mp[tolower(c)] ++;
        }
    }
    int index = -1;
    for (int i=0; i<words.size(); i++) {
        unordered_map<char, int> tmp = mp;
        for (char c: words[i]) {
            if (tmp.find(c) != tmp.end()) {
                tmp[c] --;
                if (tmp[c] == 0) tmp.erase(c);
            }
        }
        if (tmp.empty()) {
            if (index == -1 || words[i].length() < words[index].length()) {
                index = words[index].length() >= words[i].length() ? i : index;
            }
        }
    }
    return words[index];
}

int main() {


    return 0;
}
