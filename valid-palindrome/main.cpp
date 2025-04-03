#include <iostream>
#include <ctype.h>

using namespace std;

bool isPalindrome(string s) {
    string new_string = "";
    for (char c: s) {
        if (isalnum(c)) {
            new_string += tolower(c);
        }
    }
    for (int i=0; i<new_string.length()/2; i++) {
        if (new_string[i] != new_string[new_string.length()-i-1]) return false;
    }
    return true;
}

int main() {


    return 0;
}
