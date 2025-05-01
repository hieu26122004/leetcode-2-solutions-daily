#include <iostream>

using namespace std;

class Solution {
public:
    string reverseOnlyLetters(string str) {
        int left = 0;
        int right = str.length();
        while (left < right) {
            char charL = str[left];
            char charR = str[right];
            if (!isalpha(charL)) {
                left ++;
            }
            if (!isalpha(charR)) {
                right --;
            }
            if (isalpha(charL) && isalpha(charR)) {
                swap(str[left ++], str[right --]);
            }
        }
        return str;
    }
};

int main() {


    return 0;
}
