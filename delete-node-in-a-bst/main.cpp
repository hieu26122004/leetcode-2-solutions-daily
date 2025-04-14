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

TreeNode* deleteNode(TreeNode* root, int key) {
    if (!root) return nullptr;
    if (root->val > key) {
        root->left = deleteNode(root->left, key);
    } else if (root->val < key) {
        root->right = deleteNode(root->right, key);
    } else {
        if (!root->right) {
            TreeNode* left = root->left;
            delete root;
            return left;
        } else if (!root->left) {
            TreeNode* right = root->right;
            delete root;
            return right;
        } else {
            TreeNode* current = root->right;
            while (current->right) {
                current = current->right;
            }
            root->val = current->val;
            root->right = deleteNode(root->right, current->val);
        }
    }
}

int main() {

    return 0;
}
