#include <iostream>
#include <vector>

using namespace std;

class PeekingIterator : public Iterator {
private:
    int current = -1;
    bool hasNextVal = false;
    public:
        PeekingIterator(const vector<int>& nums) : Iterator(nums) {
            this->hasNextVal = Iterator::hasNext();
            if (this->hasNext()) {
                this->current = Iterator::next();
            }
        }
        int peek() {
            return current;
        }
        int next() {
            int res = this->current;
            if (Iterator::hasNext()) {
                this->current = Iterator::next();
                this->hasNextVal = true;
            } else {
                this->hasNextVal = false;
                this->current = -1;
            }
            return res;
        }
        bool hasNext() const {
            return this->hasNextVal;
        }
};

int main() {


    return 0;
}
