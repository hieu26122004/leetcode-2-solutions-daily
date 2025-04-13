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

void util(TreeNode* root, int& maxLength, int length, bool left) {
    if (!root) return;
    length ++;
    maxLength = max(maxLength, length);
    if (left) {
        util(root->left, maxLength, length, false);
        util(root->right, maxLength, 0, true);
    } else {
        util(root->right, maxLength, length, true);
        util(root->left, maxLength, 0, false);
    }
}

int longestZigZag(TreeNode* root) {
    int maxLength = 0;
    util(root->left, maxLength, 0, false);
    util(root->right, maxLength, 0, true);
    return maxLength;
}

int main() {


    return 0;
}
