#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void transform(vector<int>& row) {
        int right = row.size() - 1;
        int left = 0;
        while (left <= right) {
            swap(row[left], row[right]);
            row[left] = (row[left] == 0) ? 1 : 0;
            if (left != right) row[right] = (row[right] == 0) ? 1 : 0;
            left ++;
            right --;
        }
    }
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (vector<int>& row: image) {
            transform(row);
        }
        return image;
    }
};

int main() {


    return 0;
}
