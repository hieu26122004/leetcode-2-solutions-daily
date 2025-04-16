#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
bool isValidSudoku(vector<vector<char>>& board) {
    for (int i=0; i<9; i++) {
        unordered_set<char> ms;
        for (int j=0; j<9; j++) {
            if (board[i][j] != '.') {
                if (ms.find(board[i][j]) != ms.end()) return false;
                ms.insert(board[i][j]);
            }
        }
    }
    for (int i=0; i<9; i++) {
        unordered_set<char> ms;
        for (int j=0; j<9; j++) {
            if (board[j][i] != '.') {
                if (ms.find(board[j][i]) != ms.end()) return false;
                ms.insert(board[j][i]);
            }
        }
    }
    for (int i=0; i<9; i++) {
        unordered_set<char> ms;
        int startRow = (i / 3) * 3;
        int startCol = (i % 3) * 3;
        for (int j=startRow; j<startRow + 3; j++) {
            for (int k=startCol; k<startCol + 3; k++) {
                if (board[j][k] != '.') {
                    if (ms.find(board[j][k]) != ms.end()) return false;
                    ms.insert(board[j][k]);
                }
            }
        }
    }
    return true;
}
};

int main() {
    cout << 4 % 3;

    return 0;
}
