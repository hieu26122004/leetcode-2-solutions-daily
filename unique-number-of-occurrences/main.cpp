#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
    unordered_map<int, int> mp;
    unordered_set<int> s;
    for (int num: arr) {
        mp[num] ++;
    }
    for (pair p: mp) {
        if (s.find(p.second) != s.end()) return false;
        s.insert(p.second);
    }
    return true;
}

int main() {


    return 0;
}
