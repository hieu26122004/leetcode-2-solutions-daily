#include <iostream>
#include <vector>

using namespace std;

class MyHashSet {
    vector<bool> set(1000000, false);
public:
    MyHashSet() {}
    void add(int key) {
        set[key] == true;
    }
    void remove(int key) {
        set[key] = false;
    }
    bool contains(int key) {
        return set[key];
    }
};

int main() {


    return 0;
}
