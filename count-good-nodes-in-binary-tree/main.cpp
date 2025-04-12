#include <iostream>
#include <stack>

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

void util(TreeNode* root, int max, int &count) {
    if (!root) return;
    if (root->val >= max) {
        count ++;
    }
    int newMax = std::max(max, root->val);
    util(root->left, newMax, count);
    util(root->right, newMax, count);
}

int goodNodes(TreeNode* root) {
    int ans = 0;
    util(root, root->val, ans);
    return ans;
}

int goodNodes(TreeNode* root) {

}

int main() {


    return 0;
}
