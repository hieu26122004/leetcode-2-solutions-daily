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
        prev = current;
        current = next;
    }
    return prev;
}

int pairSum(ListNode* head) {
    ListNode* fast = head;
    ListNode* slow = head;
    while (fast && fast->next) {
        fast = fast->next->next;
        slow = slow->next;
    }
    slow->next = nullptr;
    slow = reverseList(slow);
    int maxTwin = INT_MIN;
    while (fast) {
        maxTwin = max(maxTwin, fast->val + slow->val);
        fast = fast->next;
        slow = slow->next;
    }
    return maxTwin;
}

int main() {

    return 0;
}
