#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findContentChildren(vector<int>& childrens, vector<int>& cookies) {
    sort(childrens.begin(), childrens.end());
    sort(cookies.begin(), cookies.end());
    int childrenIdx = 0;
    int cookieIdx = 0;
    while (cookieIdx < cookies.size() && childrenIdx < childrens.size()) {
        if (cookies[cookieIdx] >= childrens[childrenIdx]) {
            childrenIdx ++;
        }
        cookieIdx ++;
    }
    return childrenIdx;
}

int main() {


    return 0;
}
