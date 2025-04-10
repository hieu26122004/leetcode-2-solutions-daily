#include <iostream>
#include <stack>
#include <ctype.h>

using namespace std;

string decodeString(string str) {
    stack<string> stkStr;
    stack<int> stkNum;
    string currentStr = "";
    int currentNum = 0;
    for (char c: str) {
        if (isdigit(c)) {
            currentNum = currentNum * 10 + (c - '0');
        } else {
            if (c == '[') {
                stkNum.push(currentNum);
                currentNum = 0;
                stkStr.push(currentStr);
                currentStr = "";
            } else if (c == ']') {
                int numTop = stkNum.top();
                stkNum.pop();
                string strTop = "";
                if (!stkStr.empty()) {
                    strTop = stkStr.top();
                    stkStr.pop();
                }
                string temp = "";
                for (int i=0; i<numTop; i++) {
                    temp += currentStr;
                }
                currentStr = strTop + temp;
            } else {
                currentStr += c;
            }
        }
    }
    return currentStr;
}

int main() {


    return 0;
}
