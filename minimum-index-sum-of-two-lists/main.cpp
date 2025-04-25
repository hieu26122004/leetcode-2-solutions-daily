#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
    vector<string> ans;
    unordered_map<string, int> mp;
    for (int i=0; i<list1.size(); i++) {
        mp[list1[i]] = i;
    }
    int minSum = INT_MAX;
    for (int i=0; i<list2.size(); i++) {
        if (mp.find(list2[i]) != mp.end()) {
            int sumIndex = mp[list2[i]] + i;
            if (sumIndex < minSum) {
                ans.clear();
                ans.push_back(list2[i]);
                minSum = sumIndex;
            } else if (sumIndex == minSum) {
                ans.push_back(list2[i]);
            }
        }
    }
    return ans;
}

int main() {


    return 0;
}
