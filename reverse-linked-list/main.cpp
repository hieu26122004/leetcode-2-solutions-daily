#include <iostream>

using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* reverseList(ListNode* head) {
    if (!head || !head->next) return head;
    ListNode* current = head;
    ListNode* prev = nullptr;
    while (current) {
        ListNode* next = current->next;
        current->next = prev;
        current = prev;
        prev = current;
    }
    return current;
}

int main() {


    return 0;
}
