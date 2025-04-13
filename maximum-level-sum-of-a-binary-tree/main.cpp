#include <iostream>
#include <queue>

using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right)
        : val(x), left(left), right(right) {}
};

int maxLevelSum(TreeNode* root) {
    int ans = 1;
    queue<TreeNode*> q;
    q.push(root);
    int maxSum = 0;
    int level = 1;
    while (!q.empty()) {
        int sum = 0;
        for (int i=0; i<q.size(); i++) {
            TreeNode* current = q.front();
            q.pop();
            sum += current->val;
            if (current->left) q.push(current->left);
            if (current->right) q.push(current->right);
        }
        if (sum > maxSum) {
            maxSum = sum;
            ans = min(level, ans);
        }
        level ++;
    }
    return ans;
}

int main() {

    return 0;
}
