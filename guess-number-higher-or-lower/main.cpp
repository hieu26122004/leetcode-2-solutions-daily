#include <iostream>

using namespace std;

int guessNumber(int n) {
    int left = 1;
    int right = n;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int comparision = guess(mid);
        if (comparision == 0) {
            return mid;
        } else if (comparision == 1) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {

    return 0;
}
