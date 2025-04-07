#include <iostream>

using namespace std;

bool isVowel(char c) {
    return c == 'u' || c == 'e' || c == 'o' || c == 'a' || c == 'i';
}

int maxVowels(string str, int k) {
    int count = 0;
    int ans = 0;
    int n = str.length();
    for (int i=0; i<k; i++) {
        if (isVowel(str[i])) {
            count ++;
        }
    }
    ans = count;
    for (int i=k; i<n; i++) {
        if (isVowel(str[i])) {
            count ++;
        }
        if (isVowel(str[i-k])) {
            count --;
        }
        ans = max(ans, count);
    }
    return ans;
}

int main() {


    return 0;
}
