#include <iostream>
#include <vector>

using namespace std;

class MyHashMap {
private:
    vector<int> map;
public:
    MyHashMap() {
        map.resize(1000001, -1);
    }
    void put(int key, int value) {
        map[key] = value;
    }
    int get(int key) {
        return map[key];
    }
    void remove(int key) {
        map[key] = -1;
    }
};

int main() {


    return 0;
}
