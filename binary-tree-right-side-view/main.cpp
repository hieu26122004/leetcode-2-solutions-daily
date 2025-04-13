#include <iostream>
#include <vector>

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

void util(TreeNode* root, int& maxDepth, int currentDepth, vector<int>& ans) {
    if (!root) return;
    currentDepth ++;
    if (currentDepth > maxDepth) {
        ans.push_back(root->val);
    }
    maxDepth = max(maxDepth, currentDepth);
    util(root->right, maxDepth, currentDepth, ans);
    util(root->left, maxDepth, currentDepth, ans);
}

vector<int> rightSideView(TreeNode* root) {
    vector<int> ans;
    util(root, 0, 0, ans);
    return ans;
}

int main() {


    return 0;
}
