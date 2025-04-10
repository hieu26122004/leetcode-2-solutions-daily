#include <iostream>
#include <queue>

using namespace std;

string predictPartyVictory(string senate) {
    queue<int> teamR;
    queue<int> teamD;
    int n = senate.length();
    for (int i=0; i<n; i++) {
        if (senate[i] == 'R') {
            teamR.push(i);
        } else {
            teamD.push(i);
        }
    }
    while (!teamD.empty() && !teamR.empty()) {
        int R = teamR.front();
        teamR.pop();
        int D = teamD.front();
        teamD.pop();
        if (R < D) {
            teamR.push(R + n);
        } else {
            teamD.push(D + n);
        }
    }
    return teamD.empty() ? "Radiant" : "Dire";
}

int main() {


    return 0;
}
