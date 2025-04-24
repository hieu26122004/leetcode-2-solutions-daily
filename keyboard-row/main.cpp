#include <iostream>
#include <vector>

using namespace std;

int getRow(char c) {
    c = tolower(c);
    if (string("qwertyuiop").find(c) != string::npos) return 1;
    if (string("asdfghjkl").find(c) != string::npos) return 2;
    if (string("zxcvbnm").find(c) != string::npos) return 3;
    return -1;
}

vector<string> findWords(vector<string>& words) {
    vector<string> ans;
    for (string word: words) {
        int row = 0;
        int sameRow =  true;
        for (char c: word) {
            int currentRow = getRow(c);
            if (row == 0) {
                row = currentRow;
            } else {
                if (row != currentRow) {
                    sameRow = false;
                    break;
                }
            }
        }
        if (sameRow) {
            ans.push_back(word);
        }
    }
    return ans;
}

int main() {


    return 0;
}
