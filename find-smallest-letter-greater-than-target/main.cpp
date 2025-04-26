#include <iostream>
#include <vector>

using namespace std;

char util(vector<char>& letters, int left, int right, char target) {
    if (left == right) return letters[left];
    int mid = left + (right - left) / 2;

    return letters[mid] > target ? util(letters, left, mid, target) : util(letters, mid, right, target);
}

char nextGreatestLetter(vector<char>& letters, char target) {
    char res = util(letters, 0, letters.size() - 1, target);
    return res > target ? res : letters[0];
}

int main() {


    return 0;
}
