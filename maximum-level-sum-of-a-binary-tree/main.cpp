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

class Solution {
public:
int maxLevelSum(TreeNode* root) {
    int ans = 1;
    queue<TreeNode*> q;
    q.push(root);
    int maxSum = root->val;
    int level = 1;
    while (!q.empty()) {
        int sum = 0;
        int n = q.size();
        for (int i=0; i<n; i++) {
            TreeNode* current = q.front();
            q.pop();
            sum += current->val;
            if (current->left) q.push(current->left);
            if (current->right) q.push(current->right);
        }
        if (sum > maxSum) {
            maxSum = sum;
            ans = level;
        }
        level ++;
    }
    return ans;
}
};

int main() {

    return 0;
}
