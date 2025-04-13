#include <iostream>

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

void util(TreeNode* root, int& target, long long currentSum, int& count) {
    if (!root) return;
    currentSum += root->val;
    if (currentSum == target) {
        count ++;
    }
    util(root->left, target, currentSum, count);
    util(root->right, target, currentSum, count);
}

int pathSum(TreeNode* root, int targetSum) {
    if (!root) return 0;
    int count = 0;
    util(root, targetSum, 0, count);
    return count + pathSum(root->left, targetSum) + pathSum(root->right, targetSum);
}

int main() {


    return 0;
}
