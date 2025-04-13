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

class Solution {
public:
    bool findPath(TreeNode* root, TreeNode* target, vector<TreeNode*>& path) {
        if (!root) return false;
        path.push_back(root);
        if (root == target) return true;
        if (findPath(root->left, target, path) || findPath(root->right, target, path))
            return true;
        path.pop_back();
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> pathToP, pathToQ;
        findPath(root, p, pathToP);
        findPath(root, q, pathToQ);

        TreeNode* ans = nullptr;
        int n = min(pathToP.size(), pathToQ.size());
        for (int i = 0; i < n; ++i) {
            if (pathToP[i] == pathToQ[i]) {
                ans = pathToP[i];
            } else {
                break;
            }
        }
        return ans;
    }
};

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

}

int main() {


    return 0;
}
