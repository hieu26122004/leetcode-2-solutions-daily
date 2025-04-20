#include <iostream>
#include <vector>

using namespace std;

int util(vector<vector<int>>& triangle, int y, int x) {
    if (y == triangle.size()) return 0;
    int path1 = util(triangle, y + 1, x);
    int path2 = util(triangle, y + 1, x + 1);
    return triangle[y][x] + min(path1, path2);
}

int minimumTotal(vector<vector<int>>& triangle) {
    return util(triangle, 0, 0);
}

int main() {


    return 0;
}
