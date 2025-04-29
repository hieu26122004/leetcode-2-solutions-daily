#include <iostream>
#include <vector>

using namespace std;

int util(int n) {
    int sum = 0;
    while (n > 0) {
        int num = n % 10;
        sum += num * num;
        n /= 10;
    }
    return sum;
}

bool isHappy(int n) {
    int tortoise = n;
    int hare = util(n);
    while (hare != 1 && tortoise != 1) {
        if (tortoise == hare) return false;
        tortoise = util(tortoise);
        hare = util(util(hare));
    }
    return true;
}

int main() {


    return 0;
}
