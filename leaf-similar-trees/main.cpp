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

void util(vector<int> &leaf, TreeNode* root) {
    if (!root) return;
    if (!root->left && !root->right) {
        leaf.push_back(root->val);
        return;
    }
    util(leaf, root->left);
    util(leaf, root->right);
}

bool leafSimilar(TreeNode* root1, TreeNode* root2) {
    vector<int> leaf1;
    vector<int> leaf2;
    util(leaf1, root1);
    util(leaf2, root2);
    return leaf1 == leaf2;
}

int main() {


    return 0;
}
