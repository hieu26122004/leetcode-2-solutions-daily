#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int distributeCandies(vector<int>& candyType) {
    unordered_set<int> types(candyType.begin(), candyType.end());
    int n = candyType.size();
    return min((int)types.size(), (int)n/2);
}

int main() {


    return 0;
}
