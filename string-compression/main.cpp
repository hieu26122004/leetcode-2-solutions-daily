#include <iostream>
#include <vector>

using namespace std;

int compress(vector<char>& chars) {
    int i=0;
    int n = chars.size();

    int count = 1;
    for (int j=1; j<n; j++) {
        if (chars[j] == chars[i]) {
            count ++;
        } else {
            if (count > 1) {
                string countAsString = to_string(count);
                for (char c: countAsString) {
                    chars[++i] = c;
                }
            }
            chars[++i] = chars[j];
            count = 1;
        }
    }
    if (count > 1) {
        string countAsString = to_string(count);
        for (char c : countAsString) {
            chars[++i] = c;
        }
    }
    chars.resize(i+1);
    return i+1;
}

int main() {
    vector<char> test = { 'a','a','b','b','c','c','c' };
    int length = compress(test);

    return 0;
}
