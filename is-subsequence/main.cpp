#include <iostream>

using namespace std;

bool isSubsequence(string s, string t) {
    int i=0;
    for (int j=0; j<t.length(); j++) {
        if (s[i] == t[j]) {
            i ++;
        }
    }
    return i == s.length();
}

int main() {



    return 0;
}
